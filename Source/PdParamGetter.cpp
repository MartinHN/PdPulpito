//
//  PdParamGetter.cpp
//  Pd Pulp
//
//  Created by martin hermant on 13/10/15.
//
//

#include "PdParamGetter.h"

#include "Config.h"



struct _canvasenvironment
{
    t_symbol *ce_dir;      /* directory patch lives in */
    int ce_argc;           /* number of "$" arguments */
    t_atom *ce_argv;       /* array of "$" arguments */
    int ce_dollarzero;     /* value of "$0" */
    t_namelist *ce_path;   /* search path */
};


void PdParamGetter::getFromPdCanvas(t_canvas * x,int guiIdx){
    {
        
        Rectangle<int> patchRect = guiSizes[guiIdx];
//        Rectangle<int> region( x->gl_xmargin,x->gl_ymargin,x->gl_xmargin+ x->gl_pixwidth, x->gl_ymargin + x->gl_pixheight);//guiSizes[guiIdx];

        
        
        t_gobj * y = x->gl_list;
        for(t_gobj * y2 = y ; y2 ;y2 = y2->g_next){
            
            
            PulpParameterDesc * p = new PulpParameterDesc ;
            p->guiNum = guiIdx;
            p->elements.clear();
            
            
            bool found = true;
            if(strcmp(y2->g_pd->c_name->s_name,"canvas")==0 ){
                _glist * gl;
                if((gl = pd_checkglist(&y2->g_pd))){
                    if(gl->gl_isgraph){
//                        DBGN(gl->gl_env->ce_dir->s_name)
//                        DBG2("/",gl->gl_list);
                        getFromPdCanvas(gl, guiIdx);
                    }
                }
                found = false;
            }
            else if(y2->g_pd->c_gobj){
                if(strcmp(y2->g_pd->c_name->s_name, "hsl")==0){
                    p->type = PulpParameterDesc::HSL;
                    t_hslider *hsl = (t_hslider *)y2;
                    found = fillIemObj(&hsl->x_gui,y2, p);
                    p->min = hsl->x_min;
                    p->max = hsl->x_max;
                    if(hsl->x_gui.x_isa.x_loadinit){
                    p->defaultV = (hsl->x_val/100)*hsl->x_k + p->min;
                    }
                }
                else if(strcmp(y2->g_pd->c_name->s_name, "vsl")==0){
                    p->type = PulpParameterDesc::VSL;
                    t_vslider *vsl = (t_vslider *)y2;
                    found = fillIemObj(&vsl->x_gui,y2, p);
                    p->min = vsl->x_min;
                    p->max = vsl->x_max;
                    if(vsl->x_gui.x_isa.x_loadinit){
                    p->defaultV = (vsl->x_val/100)*vsl->x_k + p->min;
                    }
                }
//                else if(strcmp(y2->g_pd->c_name->s_name, "knob")==0){
//                    p->type = PulpParameterDesc::KNOB;
//                    t_vslider *vsl = (t_vslider *)y2;
//                    fillIemObj(&vsl->x_gui,y2, p);
//                    p->min = vsl->x_min;
//                    p->max = vsl->x_max;
//                }
                else if(strcmp(y2->g_pd->c_name->s_name, "tgl")==0){
                    p->type = PulpParameterDesc::TOGGLE;
                    t_toggle *tgl = (t_toggle *)y2;
                    found = fillIemObj(&tgl->x_gui,y2, p);
                    p->min = 0;
                    p->max = 1;
                }
                else if(strcmp(y2->g_pd->c_name->s_name, "bng")==0){
                    p->type = PulpParameterDesc::BANG;
                    t_bng *tgl = (t_bng *)y2;
                    found = fillIemObj(&tgl->x_gui,y2, p);
                    p->min = 0;
                    p->max = 1;
                }
                else if(strcmp(y2->g_pd->c_name->s_name, "vradio")==0){
                    p->type = PulpParameterDesc::VRADIO;
                    t_vradio *tgl = (t_vradio *)y2;
                    found = fillIemObj(&tgl->x_gui,y2, p);
                    p->min = 0;
                    p->max = tgl->x_number-1;
                    for(int i = 0 ; i < tgl->x_number ; i++){
                        p->elements.add(String(i));
                    }
                }
                else if(strcmp(y2->g_pd->c_name->s_name, "hradio")==0){
                    p->type = PulpParameterDesc::HRADIO;
                    t_hradio *tgl = (t_hradio *)y2;
                    found = fillIemObj(&tgl->x_gui,y2, p);
                    p->min = 0;
                    p->max = tgl->x_number-1;
                    for(int i = 0 ; i < tgl->x_number ; i++){
                        p->elements.add(String(i));
                    }
                }
                else if(strcmp(y2->g_pd->c_name->s_name, "cnv")==0){
                    p->type = PulpParameterDesc::CNV;
                    t_my_canvas * cnv = (t_my_canvas*) y2;
                    found = fillIemObj(&cnv->x_gui,y2, p);
                    p->setSize(cnv->x_vis_w, cnv->x_vis_h);
                    
                }
                
                else{
                    found = false;
                }
                if(found ){
                    p->isAudioParameter = p->sendName.startsWith("param");
                    p->setBounds((p->getX() )/patchRect.getWidth(),
                                 (p->getY() )/patchRect.getHeight(),
                                 p->getWidth()/patchRect.getWidth(),
                                 p->getHeight()/patchRect.getHeight());
                    p->labelRect.setBounds((p->labelRect.getX())/patchRect.getWidth(),
                                           (p->labelRect.getY())/patchRect.getHeight(),
                                           p->labelRect.getWidth()/patchRect.getWidth(),
                                           p->labelRect.getHeight()/patchRect.getHeight());
                    p->sendName = resolveDollarzero(p->sendName);
                    p->recieveName = resolveDollarzero(p->recieveName);
                    DBGN(y2->g_pd->c_name->s_name << " : ")
                    DBG("adding p " << p->sendName << "/" << p->recieveName <<  " at "<< ((Rectangle<float>)*p).toString());
                    
                    if(p->isAudioParameter){
                        p->processorIdx = localParamCount;
                        localParamCount++;
                        audioParameters.add(p);
                    }
                    else{
                        p->processorIdx = -1;
                    }
                    p->pdObjectIdx = localObjectCount;
                    localObjectCount++;
                    pulpParameterDescs.add(p);
                    
                }
                else{
                    delete p;
                    
                }
                
            }
            
        }
    }
    
}
void PdParamGetter::getParamFromPd(pd::PdBase * pd){
    //    parsedString.clear();
    guiSizes.clear();
    guiFiles.clear();
    pulpParameterDescs.clear();
    audioParameters.clear();
    localObjectCount =0;
    localParamCount = 0;
    GUINumParams.clear();
    GUINumObjects.clear();
    
    t_canvas * x;// = pd_getcanvaslist();
    pd->setMainContext();
    bool isRoot = true;
    
    
    for(x= pd_getcanvaslist(); x; x = x->gl_next){
        DBG3(x->gl_name->s_name,x->gl_env->ce_dir->s_name,x->gl_env->ce_argc);
        if(isRoot){
            guiFiles.add(File(x->gl_env->ce_dir->s_name).getChildFile(x->gl_name->s_name));
            PdRootName =x->gl_name->s_name;
            isRoot = false;
        }
        
        
        //        DBG4(x->gl_screenx1,x->gl_screeny1,x->gl_screenx2,x->gl_screeny2)
        int guiIdx = 0;
        Rectangle<int> patchRect (x->gl_screenx2-x->gl_screenx1,x->gl_screeny2-x->gl_screeny1);
        guiSizes.add(patchRect);
        DBG(patchRect.toString());
        
        int tmpCount = localParamCount;
        int tmpObjCount = localObjectCount;
        
        
        getFromPdCanvas(x,guiIdx);
        
        guiIdx++;
//        if(pulpParameterDescs.size()>0){
//            float minX = std::min(std::min(minX, pulpParameterDescs[0]->getX()),pulpParameterDescs[0]->labelRect.getX()) ;
//            float minY = std::min(std::min(minY, pulpParameterDescs[0]->getY()),pulpParameterDescs[0]->labelRect.getY()) ;
//            
//            for(auto & p:pulpParameterDescs){
//                minX = std::min(std::min(minX, p->getX()),p->labelRect.getX()) ;
//                minY = std::min(std::min(minY, p->getY()),p->labelRect.getY()) ;
//            }
//            for(auto & p:pulpParameterDescs){
//                p->setPosition( p->getX()-minX,p->getY()-minY);
//            }
//        }
        GUINumObjects.add(localObjectCount - tmpObjCount);
        GUINumParams.add(localParamCount-tmpCount);
    }
}


bool PdParamGetter::fillIemObj(_iemgui * o,t_gobj * gobj,PulpParameterDesc * p){
    int x01,y01,x02,y02;
    
    if(o->x_glist->gl_isgraph){
        if(
           o->x_obj.te_xpix < o->x_glist->gl_xmargin ||
           o->x_obj.te_ypix < o->x_glist->gl_ymargin ||
           o->x_obj.te_xpix > o->x_glist->gl_xmargin + o->x_glist->gl_pixwidth||
           o->x_obj.te_ypix > o->x_glist->gl_ymargin + o->x_glist->gl_pixheight
           
           
           )
        {
            //        DBG2(o->x_obj.te_xpix ,o->x_obj.te_ypix)
            //        DBG4(o->x_glist->gl_xmargin, o->x_glist->gl_ymargin, o->x_glist->gl_xmargin + o->x_glist->gl_pixwidth,o->x_glist->gl_ymargin + o->x_glist->gl_pixheight);
            DBG("dropping out comp" << o->x_snd->s_name);
            return false;
        }
    }
    gobj_getrect(gobj, o->x_glist,&x01,&y01,&x02,&y02);
    DBG4(x01,y01,x02 ,y02);
    
    p->sendName = o->x_snd->s_name;
    p->recieveName = o->x_rcv->s_name;
    if( strcmp(o->x_lab->s_name, "empty")!=0){
        p->labelName = o->x_lab->s_name;
        p->hasLabel = true;
        p->labelSize = o->x_fontsize;
        p->labelRect.setBounds(o->x_ldx,
                               o->x_ldy - p->labelSize/3,
                               (p->sendName.length()*p->labelSize),
                               (p->labelSize));
    }
    Point<int> offset(o->x_obj.te_xpix,o->x_obj.te_ypix);
    
    p->setBounds(  x01,y01,x02-x01,y02-y01);
    
    p->backColour = getPdColour(o->x_bcol);
    p->mainColour =getPdColour(o->x_fcol);
    
    
    return true;
    
}


File PdParamGetter::subPatchExists(String sub){
    
    return guiFiles[0].getParentDirectory().getChildFile(sub+".pd");
}



//Array<int> PdParamGetter::connectedToOutlet(int objNum,int outNum){
//    Array<int> res;
//    for(auto & l:parsedString){
//        if(l[1] == "connect"){
//            if(l[2].getIntValue()==objNum && l[3].getIntValue()==outNum){
//                res.add(l[4].getIntValue());
//            }
//        }
//    }
//    return res;
//}




PulpParameterDesc * PdParamGetter::getObjectForIdx(int idx){
    if( idx >= pulpParameterDescs.size())jassertfalse;
    return pulpParameterDescs[idx];
}
int PdParamGetter::getTotalObjectCount(){
    return pulpParameterDescs.size();
    
}

PulpParameterDesc * PdParamGetter::getParamForIdx(int idx){
    if( idx >= audioParameters.size())jassertfalse;
    return audioParameters[idx];
}
int PdParamGetter::getTotalParameterCount(){
    return audioParameters.size();
    
}



int PdParamGetter::getNumObjectsForGUI(int guiNum){
    if(guiNum>=GUINumObjects.size())jassertfalse;
    
    return GUINumObjects[guiNum];
}


String PdParamGetter::resolveDollarzero(String & c){
    if(dollarZero==0){
        jassertfalse;
    }
    return c.replace("\\$0", String(dollarZero));
}

int PdParamGetter::getProcessorStartIdxForGUI(int guiNum){
    int guiI=0;
    int start = 0;
    for(auto g:GUINumObjects){
        if(guiI<guiNum){start+=g;}
        if(guiI==guiNum){
            return start;
        }
        guiI++;
    }
    return -1;
    
    
}


Colour PdParamGetter::getPdColour(int c){

    if(c >= 0xfcfcfc){
     return Colours::black.withAlpha(0.0f);
    }
    int r = (c>>16) & 0xff;
    int g = (c>>8) & 0xff;
    int b = (c) & 0xff;
    

    return Colour(r,g,b);
}


Rectangle<int> PdParamGetter::getBoundOfGui(int guiNum){
    jassert(guiNum<guiSizes.size());
    return guiSizes[guiNum];
}


int PdParamGetter::getNumGUI(){
    return guiFiles.size();
}