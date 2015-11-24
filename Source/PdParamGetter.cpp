//
//  PdParamGetter.cpp
//  Pd Pulp
//
//  Created by martin hermant on 13/10/15.
//
//

#include "PdParamGetter.h"

#include "Config.h"

int PdParamGetter::dollarZero = 1002;






void PdParamGetter::getParameterDescsFromPatch(File & patchfile){
    parsedString.clear();
    guiSizes.clear();
    guiFiles.clear();
    dollarZero++;
    pulpParameterDescs.clear();
    audioParameters.clear();
    localObjectCount =0;
    localParamCount = 0;
    GUINumParams.clear();
    GUINumObjects.clear();
    PdRootName = patchfile.getFileName();
    
    juce::StringArray destLines;

    File f = File(patchfile.getParentDirectory().getChildFile("gui.pd"));
    guiFiles.add(f);
    if(!guiFiles[0].exists()){
        jassertfalse;
        return;
    }
    
    for(auto g:guiFiles){
        DBG( "loading gui" );;
        g.readLines(destLines);
        parsedString.add(parseText(destLines,true));
    }
    
    


    int guiIdx = 0;
    
    for(auto  g:parsedString){
  
        int tmpCount = localParamCount;
        int tmpObjCount = localObjectCount;
        getParamsFromText(g, guiIdx);
        GUINumObjects.add(localObjectCount - tmpObjCount);
        GUINumParams.add(localParamCount-tmpCount);
        // find top left most coordinate from pd
        if(pulpParameterDescs.size()>0){
            float minX = std::min(std::min(minX, pulpParameterDescs[0]->getX()),pulpParameterDescs[0]->labelRect.getX()) ;
            float minY = std::min(std::min(minY, pulpParameterDescs[0]->getY()),pulpParameterDescs[0]->labelRect.getY()) ;
            
            for(auto & p:pulpParameterDescs){
                minX = std::min(std::min(minX, p->getX()),p->labelRect.getX()) ;
                minY = std::min(std::min(minY, p->getY()),p->labelRect.getY()) ;
            }
            for(auto & p:pulpParameterDescs){
                p->setPosition( p->getX()-minX,p->getY()-minY);
            }
        }
        guiIdx++;
    }
    
}

void PdParamGetter::getParamsFromText(Array<StringArray> g,int guiIdx,Rectangle<int> region,Point < int > offset){

    File subPatchFile;
    for(auto  l : g){
        
        if(l[0] == "#X") {
            
            if( l[1] == "obj" || l[1] == "text"){
                
                if(l.size()>4){
                    String pdType = l[4];
                    
                    Rectangle<int> patchRect = guiSizes[guiIdx];
                    PulpParameterDesc * p = new PulpParameterDesc ;
                    p->guiNum = guiIdx;
                    p->elements.clear();
                    bool found = true;
                    if(pdType.startsWith("flatgui/")){
                        pdType = pdType.substring(8);
                    }
                    
                    
                    
                    if (l[1] == "text"){
                        p->type=PulpParameterDesc::CNV;
                        String name = "";
                        for(int i = 4 ; i < l.size() ; i++){
                            name.append(l[i].replaceCharacters("\\","") + " ", 200);
                        }
                        
                        p->labelName = name;
                        p->name = name;
                        p->hasLabel = true;
                        p->labelSize = 13;
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue()+p->labelSize,
                                     name.length() * p->labelSize,
                                     p->labelSize);
                        p->labelRect.setBounds(0,
                                               0,
                                               (name.length()*p->labelSize),
                                               (p->labelSize));
                    
                    }
                    else if(pdType == "nbx" || pdType == "knob" ||  pdType == "vsl"|| pdType == "hsl"){
                        p->hasLabel = l[13]!="empty";
                        p->labelName = l[13];
                        p->min = l[7].getFloatValue();
                        p->max = l[8].getFloatValue();
                        
                        p->labelRect.setBounds((l[14].getFloatValue()),
                                               (l[15].getFloatValue()),
                                               (p->name.length()*l[17].getFloatValue()),
                                               (l[17].getFloatValue()));
                        
                        p->labelSize = l[17].getFloatValue();
                        p->name=l[11];
                        if(p->name.startsWith("\\$")){
                            p->name = String(dollarZero) + p->name.substring(3);
                        }
                        
                        // numBox
                        if(pdType == "nbx" ){
                            p->type = PulpParameterDesc::NUMBOX;
                            p->setBounds(l[2].getFloatValue(),
                                         l[3].getFloatValue(),
                                         (20+l[5].getFloatValue()*10.0),
                                         (1+l[6].getFloatValue()));
                            
                        }
                        
                        // knob
                        else if(pdType == "knob" || pdType == "vsl"|| pdType == "hsl"){
                            if(pdType == "vsl")         p->type = PulpParameterDesc::VSL;
                            else if (pdType == "hsl")   p->type = PulpParameterDesc::HSL;
                            else                        p->type = PulpParameterDesc::KNOB;
                            
                            
                            p->setBounds(l[2].getFloatValue(),
                                         l[3].getFloatValue(),
                                         ((l[5].getFloatValue())+5),
                                         ((l[6].getFloatValue())+5));
                            p->backColour = getPdColour(l[18].getIntValue());
                            p->mainColour =getPdColour(l[19].getIntValue());
                            
                        }
                        
                        
                        
                    }
                    // toggle
                    else if(pdType == "tgl"){
                        p->type = PulpParameterDesc::TOGGLE;
                        p->hasLabel = l[9]!="empty";
                        p->labelName =  l[9];
                        p->name = l[7];
                        p->labelSize = l[13].getFloatValue();
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue(),
                                     l[5].getFloatValue(),
                                     l[5].getFloatValue());
                        p->labelRect.setBounds((l[10].getFloatValue()),
                                               (l[11].getFloatValue()),
                                               (p->name.length()*p->labelSize),
                                               (p->labelSize));
                        
                        
                        
                        
                    }
                    else if (pdType == "vradio" || pdType == "hradio"){
                        p->type = pdType == "vradio"?PulpParameterDesc::VRADIO:PulpParameterDesc::HRADIO;
                        p->hasLabel = l[9]!="empty";
                        p->labelName =  l[9];
                        p->name = l[9];
                        p->labelSize = l[13].getFloatValue();
                        int size = l[8].getIntValue();
                        int w = l[5].getFloatValue();
                        for(int i = 0 ; i < size ; i++){
                            p->elements.add(String(i));
                        }
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue(),
                                     pdType == "vradio"?w:size *w,
                                     pdType == "vradio"?w*size:w);
                        p->labelRect.setBounds((l[10].getFloatValue()),
                                               (l[11].getFloatValue()),
                                               (p->name.length()*p->labelSize),
                                               (p->labelSize));
                        
                        
                    }
                    else if(pdType == "bng"){
                        p->type = PulpParameterDesc::BANG;
                        p->hasLabel = l[11]!="empty";
                        p->labelName =  l[11];
                        p->name = l[11];
                        p->labelSize = l[15].getFloatValue();
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue(),
                                     l[5].getFloatValue(),
                                     l[5].getFloatValue());
                        p->labelRect.setBounds((l[12].getFloatValue()),
                                               (l[13].getFloatValue()),
                                               (p->name.length()*p->labelSize),
                                               (p->labelSize));
                        
                        
                        
                        
                    }
                    else if(pdType.contains("popup")){
                        
                        p->name = l[8];
                        p->labelName = "";
                        p->type = PulpParameterDesc::POPUP;
                        p->hasLabel =false;
                        
                        for(int e=9; e <l.size() ; e++ ){
                            p->elements.add(l[e]);
                        }
                        
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue(),
                                     l[5].getFloatValue(),
                                     l[6].getFloatValue());
                        
                        
                        
                    }
                    
                    else if(pdType == "cnv"){
                        p->type=PulpParameterDesc::CNV;
                        p->labelName = l[10];
                        p->name = l[10];
                        p->hasLabel = true;
                        p->labelSize = l[14].getFloatValue();
                        p->setBounds(l[2].getFloatValue(),
                                     l[3].getFloatValue(),
                                     l[6].getFloatValue(),
                                     l[7].getFloatValue());
                        p->labelRect.setBounds((l[11].getFloatValue()),
                                               (l[12].getFloatValue()),
                                               (p->name.length()*p->labelSize),
                                               (p->labelSize));
                        p->backColour = getPdColour(l[15].getIntValue());
                        
                        
                        
                    }
                    
                    
                    // recursive in subPatch
                    else if((subPatchFile = subPatchExists(pdType)).exists()){
                        StringArray destlines;
                        subPatchFile.readLines(destlines);
                        
                        Array<StringArray> parsedText = parseText(destlines,false);
                        
                        if(parsedText.getLast().size()> 8 && parsedText.getLast()[1] == "coords" && parsedText.getLast()[8].getIntValue() > 0){
                            Rectangle<int> Nregion;
                            Nregion.setBounds(parsedText.getLast()[9].getIntValue(),
                                              parsedText.getLast()[10].getIntValue(),
                                              parsedText.getLast()[6].getIntValue(),
                                              parsedText.getLast()[7].getIntValue());
                            Point <int> Noffset(l[2].getIntValue(),l[3].getIntValue());
                        getParamsFromText(parsedText,guiIdx,Nregion,Noffset);
                            
                            
                        }
                        found = false;
                        
                        
                    }
                    else{
                        found = false;
                    }
                    
                    
                    
                    if(region.getWidth()>0 && !region.contains(p->getX(),p->getY())){
//                        DBG("dropping component out of scope");
                        found = false;
                    }
                    if(found){
                        
                        p->setBounds((p->getX()-region.getX()+offset.x)/patchRect.getWidth(),
                                     (p->getY()-region.getY()+offset.y)/patchRect.getHeight(),
                                     p->getWidth()/patchRect.getWidth(),
                                     p->getHeight()/patchRect.getHeight());
                        p->labelRect.setBounds((p->labelRect.getX())/patchRect.getWidth(),
                                     (p->labelRect.getY())/patchRect.getHeight(),
                                     p->labelRect.getWidth()/patchRect.getWidth(),
                                     p->labelRect.getHeight()/patchRect.getHeight());
                        DBG("adding p " << p->name << " at "<< ((Rectangle<float>)*p).toString());
                        if(p->name==""){
                            for(auto ll:l){
                                DBGN(ll);
                            }
                            DBG("");
                        }
                        if(p->isAudioParameter()){
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
//                        DBG( "not found gui object for type " << pdType );
                    }
                }
                
                
            }
            
        }
        
    }
 

}

File PdParamGetter::subPatchExists(String sub){
    
return guiFiles[0].getParentDirectory().getChildFile(sub+".pd");
}

Array<StringArray>  PdParamGetter::parseText(StringArray destLines,bool isRootGUI){
    String concatL = "";
    Array<StringArray> curA;
    
    bool firstLine = true;
    for(auto  l : destLines){
        concatL +=l;
        concatL+=" ";
        if(l.endsWith(";")){
            juce::StringArray curS ;
            curS.addTokens (concatL," ;","");
            if(firstLine && isRootGUI && curS[0] == "#N" && curS[1] == "canvas"){
                Rectangle<int> patchRect(0,0,curS[4].getIntValue(),curS[5].getIntValue());
                guiSizes.add(patchRect);
                
            }
            if(curS[0]=="#X"){
                curA.add(curS);
                
            }
            concatL.clear();
        }
        firstLine = false;
    }
    
    
    return curA;
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
    if(c==-262144)return Colours::black.withAlpha(0.0f);
    c = -1 -c;
    
    int r =int((((c>>12)<<2)&0xff));
    int g = int((((c>>6)<<2)&0xff));
    int b = int(((c<<2)&0xff));
    return Colour(r,g,b);
}


Rectangle<int> PdParamGetter::getBoundOfGui(int guiNum){
    jassert(guiNum<guiSizes.size());
    return guiSizes[guiNum];
}


int PdParamGetter::getNumGUI(){
    return guiFiles.size();
}