//
//  PdParamGetter.cpp
//  Pd Pulp
//
//  Created by martin hermant on 13/10/15.
//
//

#include "PdParamGetter.h"


void PdParamGetter::readPatch(juce::File &patchFile){
    patchString.clear();
    patchRect.setBounds(0, 0, 0, 0);
    
    juce::StringArray destLines;
    guiFile.clear();
    File f = File(patchFile.getParentDirectory().getChildFile("gui.pd"));
    guiFile.add(f);
    if(!guiFile[0].exists()){
        return;
    }
    
    int idx =0;
    patchString.clear();
    for(auto g:guiFile){
        DBG( "loading gui" << idx);;
        g.readLines(destLines);
        String concatL = "";
//        patchString[idx].clear();
        Array<StringArray> curA;
        for(auto  l : destLines){
            concatL +=l;
            concatL+=" ";
            if(l.endsWith(";")){
                juce::StringArray curS ;
                curS.addTokens (concatL," ;","");
                if(curS[0] == "#N" && curS[1] == "canvas"){
                    patchRect.setSize(curS[4].getIntValue(),curS[5].getIntValue());
                    
                }
                if(curS[0]=="#X"){
                    curA.add(curS);
                    
                }
                concatL.clear();
            }
        }
        patchString.add(curA);
        idx++;
    }
}

void PdParamGetter::getParameterDescsFromPatch(File & patchfile){
    readPatch(patchfile);
    static int dollarZero = 1002;
    dollarZero++;
    pulpParameterDescs.clear();
    
    int objNum = 0;
    int guiIdx = 0;
    for(auto  g:patchString){
        DBG(g.size());
        for(auto  l : g){
            
            if(l[0] == "#X") {
                
                if( l[1] == "obj"){
                    
                    if(l.size()>4){
                        String pdType = l[4];
                        
                        
                        PulpParameterDesc p;
                        p.guiNum = guiIdx;
                        p.elements.clear();
                        bool found = true;
                        if(pdType.startsWith("flatgui/")){
                            pdType = pdType.substring(8);
                        }
                        DBG(pdType);
                        if(pdType == "nbx" || pdType == "knob" || pdType == "bng" || pdType == "vsl"|| pdType == "hsl"){
                            p.hasLabel = l[13]!="empty";
                            p.labelName = l[13];
                            p.min = l[7].getFloatValue();
                            p.max = l[8].getFloatValue();
                            
                            p.labelRect.setBounds((p.getX() - l[14].getFloatValue())/patchRect.getWidth(),
                                                  (p.getY() - l[15].getFloatValue())/patchRect.getHeight(),
                                                  (p.name.length()*l[17].getFloatValue())/patchRect.getWidth(),
                                                  (l[17].getFloatValue()/patchRect.getHeight()));
                            
                            p.labelSize = l[17].getFloatValue();
                            p.name=l[11];
                            if(p.name.startsWith("\\$")){
                                p.name = String(dollarZero) + p.name.substring(3);
                            }
                            
                            // numBox
                            if(pdType == "nbx" ){
                                p.type = PulpParameterDesc::NUMBOX;
                                p.setBounds(l[2].getFloatValue()/patchRect.getWidth(),
                                            l[3].getFloatValue()/patchRect.getHeight(),
                                            (20+l[5].getFloatValue()*10.0)/patchRect.getWidth(),
                                            (1+l[6].getFloatValue())/patchRect.getHeight());
                                
                            }
                            
                            // knob
                            else if(pdType == "knob" || pdType == "bng" || pdType == "vsl"|| pdType == "hsl"){
                                if(pdType == "vsl")         p.type = PulpParameterDesc::VSL;
                                else if (pdType == "hsl")   p.type = PulpParameterDesc::HSL;
                                else                        p.type = PulpParameterDesc::KNOB;
                                
                                
                                p.setBounds(l[2].getFloatValue()/patchRect.getWidth(),
                                            l[3].getFloatValue()/patchRect.getHeight(),
                                            (l[5].getFloatValue())/patchRect.getWidth(),
                                            (l[6].getFloatValue())/patchRect.getHeight());
                                //                            DBG("setting width" << (l[5].getFloatValue())/patchRect.getHeight() << " height" << (l[6].getFloatValue())/patchRect.getHeight());
                                
                                
                            }
                        }
                        // toggle
                        else if(pdType == "tgl"){
                            p.type = PulpParameterDesc::TOGGLE;
                            p.hasLabel = l[9]!="empty";
                            p.labelName =  l[9];
                            p.name = l[7];
                            p.labelSize = l[13].getFloatValue();
                            p.setBounds(l[2].getFloatValue()/patchRect.getWidth(),
                                        l[3].getFloatValue()/patchRect.getHeight(),
                                        l[5].getFloatValue()/patchRect.getWidth(),
                                        l[5].getFloatValue()/patchRect.getHeight());
                            p.labelRect.setBounds((p.getX() - l[10].getFloatValue())/patchRect.getWidth(),
                                                  (p.getY() - l[11].getFloatValue())/patchRect.getHeight(),
                                                  (p.name.length()*p.labelSize)/patchRect.getWidth(),
                                                  (p.labelSize/patchRect.getHeight()));
                            
                            
                            
                            
                        }
                        else if(pdType.contains("popup")){
                            
                            p.name = l[8];
                            
                            p.type = PulpParameterDesc::POPUP;
                            p.hasLabel =false;
                            
                            for(int e=9; e <l.size() ; e++ ){
                                p.elements.add(l[e]);
                            }
                            
                            p.setBounds(l[2].getFloatValue()/patchRect.getWidth(),
                                        l[3].getFloatValue()/patchRect.getHeight(),
                                        l[5].getFloatValue()/patchRect.getWidth(),
                                        l[6].getFloatValue()/patchRect.getHeight());
                            
                            
                        }
                        
                        else if(pdType == "cnv"){
                            p.type=PulpParameterDesc::CNV;
                            p.labelName = l[10];
                            p.name = l[10];
                            p.hasLabel = true;
                            p.setBounds(l[2].getFloatValue()/patchRect.getWidth(),
                                        l[3].getFloatValue()/patchRect.getHeight(),
                                        l[6].getFloatValue()/patchRect.getWidth(),
                                        l[7].getFloatValue()/patchRect.getHeight());
                            
                        }
                        
                        else{
                            found = false;
                        }
                        
                        
                        if(found){
                            DBG("adding p " << p.name << " at "<< ((Rectangle<float>)p).toString());
                            pulpParameterDescs.add(p);
                        }
                        else{
                            DBG( "not found gui object for type " << pdType  << " at line " << objNum );
                        }
                    }
                    
                    
                }
                objNum++;
            }
            
        }
        
        
        // find top left most coordinate from pd
        if(pulpParameterDescs.size()>0){
            float minX = std::min(std::min(minX, pulpParameterDescs[0].getX()),pulpParameterDescs[0].labelRect.getX()) ;
            float minY = std::min(std::min(minY, pulpParameterDescs[0].getY()),pulpParameterDescs[0].labelRect.getY()) ;
            
            for(auto & p:pulpParameterDescs){
                minX = std::min(std::min(minX, p.getX()),p.labelRect.getX()) ;
                minY = std::min(std::min(minY, p.getY()),p.labelRect.getY()) ;
            }
            for(auto & p:pulpParameterDescs){
                p.setPosition( p.getX()-minX,p.getY()-minY);
            }
        }
        guiIdx++;
    }
    
}


//Array<int> PdParamGetter::connectedToOutlet(int objNum,int outNum){
//    Array<int> res;
//    for(auto & l:patchString){
//        if(l[1] == "connect"){
//            if(l[2].getIntValue()==objNum && l[3].getIntValue()==outNum){
//                res.add(l[4].getIntValue());
//            }
//        }
//    }
//    return res;
//}


void PdParamGetter::setParametersFromDescs(){
    // hack to allow to reload parameters on the go
    // allow to add new or replace param as the host may need to keep same pointers
    
    
    
    for(int i = 0; i < pulpParameterDescs.size() ; i++){
        if(localParamCount<=i){
            PdParameter* p = new PdParameter (0, (pulpParameterDescs[i].name));
            pdParameters.add(p);
            localParamCount ++;
        }
        else if(i<pdParameters.size()){
            pdParameters[i]->setName((pulpParameterDescs[i].name));
            pdParameters[i]->setValue(0);
        }
        else{
            DBG("parameter not found " << pulpParameterDescs[i].name << "count : " << localParamCount);
        }
        
    }
    
}


Array<PdParamGetter::PulpParameterDesc> PdParamGetter::getDescForGui(int num){
    Array<PdParamGetter::PulpParameterDesc> res;
    for(auto &p:pulpParameterDescs){
        if(p.guiNum==num){
            res.add(p);
        }
    }
    return res;
    
}


int PdParamGetter::getProcessorStartIdxForGUI(int guiNum){
    
    for(auto &p:pulpParameterDescs){
        if(p.guiNum==guiNum){
            return p.processorIdx;
        }
    }
    return -1;
    
    
}

int PdParamGetter::getNumGUI(){
    return guiFile.size();
}