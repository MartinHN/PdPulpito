//
//  TUIOComponent.cpp
//  PdPulpito
//
//  Created by martin hermant on 18/11/15.
//
//

#include "TUIOComponent.h"


TuioClient * TUIOComponent::TUIOClient = nullptr;
int TUIOComponent::numJuceListener=0;
#define TUIOTOUCH0 1



void TUIOComponent::addTuioCursor(TuioCursor *tcur){
    
    
    if (parentComponent)
        if(ComponentPeer* const peer = parentComponent->getPeer()){
            Point<float> global = getScreenPos(tcur);
            Point<float> local = peer->globalToLocal (global);
            DBG("Mouse " << (tcur)->getCursorID() << " :" << local.toString() <<"," <<  global.toString());
            
            peer->handleMouseEvent ((tcur)->getCursorID()+TUIOTOUCH0,
                                    local
                                    , 0,
                                    MouseInputSource::invalidPressure, Time::currentTimeMillis());
            
            drawCursor(tcur, local, drawCmd::ADD);
        }
    
    
    
    
}




void TUIOComponent::updateTuioCursor(TuioCursor *tcur){
    
    if (parentComponent)
        if(ComponentPeer* const peer = parentComponent->getPeer()){
            Point<float> global = getScreenPos(tcur);
            Point<float> local = peer->globalToLocal (global);
            

            DBG("Mouse " << (tcur)->getCursorID() << " :" << (tcur)->getX() <<"," << (tcur)->getY() <<" / " <<  local.toString() <<"," <<  global.toString());
            ModifierKeys mods;
            peer->handleMouseEvent ((tcur)->getCursorID()+TUIOTOUCH0,
                                    local
                                    , mods.withFlags(ModifierKeys::leftButtonModifier),
                                    MouseInputSource::invalidPressure, Time::currentTimeMillis());
            
            
            
        drawCursor(tcur, local, drawCmd::UPDATE);
        }
    
    
    
    
}




void TUIOComponent::removeTuioCursor(TuioCursor *tcur){
    if (parentComponent)
        if(ComponentPeer* const peer = parentComponent->getPeer()){
            Point<float> global = getScreenPos(tcur);
            Point<float> local = peer->globalToLocal (global);
            DBG("Mouse " << (tcur)->getCursorID() << " :" << local.toString() <<"," <<  global.toString());
            
            peer->handleMouseEvent ((tcur)->getCursorID()+TUIOTOUCH0,
                                    local
                                    , 0,
                                    MouseInputSource::invalidPressure, Time::currentTimeMillis());
            
            drawCursor(tcur, local, drawCmd::REMOVE);
        }

    
}


Point<float> TUIOComponent::getScreenPos(TuioCursor * tcur){
    
    if (parentComponent)
        if(ComponentPeer* const peer = parentComponent->getPeer()){
            int xOffset=0;
            Point<float> tstPoint  =  peer->localToGlobal(Point<float>(0,0));
            Desktop::Displays::Display dis = Desktop::getInstance().getDisplays().getDisplayContaining(Point<int>(tstPoint.getX(),tstPoint.getY()));
            Rectangle<int> TUIOArea = dis.totalArea;
            if(dis.isMain==false){
                xOffset = Desktop::getInstance().getDisplays().getMainDisplay().totalArea.getWidth();
            }
            
            return Point<float> (xOffset + ((tcur)->getX())* TUIOArea.getWidth(),
                                 ((tcur)->getY())* TUIOArea.getHeight());
            
            
        }
    
    return Point<float>(0,0);
}

void TUIOComponent::drawCursor(TuioCursor * tcur,Point<float>& pos,drawCmd cmd){
    switch(cmd){
        case ADD:{
            
            Path shape;
            int radius = 30;
            shape.addEllipse(pos.getX()-radius*.5,pos.getY()-radius*.5, radius,radius);
            DrawablePath * p = new DrawablePath();
            p->setPath(shape);
            p->setFill(FillType(Colours::black.withAlpha(0.0f)));
            p->setStrokeType(PathStrokeType(2));
            p->setStrokeFill(FillType(Colours::black));
            dbgDraw.add(p);
            parentComponent->addAndMakeVisible(p);
        }
            break;
            
        case UPDATE:
            if(tcur->getCursorID() < dbgDraw.size()){
                dbgDraw[tcur->getCursorID()]->setTopLeftPosition(pos.getX(),pos.getY());
            }
            break;
        case REMOVE:
            if(tcur->getCursorID() < dbgDraw.size()){
                dbgDraw.remove(tcur->getCursorID());
            }
            
            break;
            
    }
    
    
}