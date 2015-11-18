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
            int xOffset=0;
            Point<float> tstPoint  =  parentComponent->getPeer()->localToGlobal(Point<float>(0,0));
            Desktop::Displays::Display dis = Desktop::getInstance().getDisplays().getDisplayContaining(Point<int>(tstPoint.getX(),tstPoint.getY()));
            Rectangle<int> TUIOArea = dis.totalArea;
            if(dis.isMain==false){
                xOffset = Desktop::getInstance().getDisplays().getMainDisplay().totalArea.getWidth();
            }
            
            Point<float> global(xOffset + ((tcur)->getX())* TUIOArea.getWidth(),
                                ((tcur)->getY())* TUIOArea.getHeight()
                                );
        Point<float> local = peer->globalToLocal (global);
            
            Path shape;
            shape.addEllipse(local.getX(),local.getY(), 30, 30);
            DrawablePath * p = new DrawablePath();
            p->setPath(shape);
            dbgDraw.add(p);
            parentComponent->addAndMakeVisible(p);
            
            
        DBG("Mouse " << (tcur)->getCursorID() << " :" << local.toString() <<"," <<  global.toString());
        
        peer->handleMouseEvent ((tcur)->getCursorID()+TUIOTOUCH0,
                                local
                                , 0,
                                MouseInputSource::invalidPressure, Time::currentTimeMillis());
    }
    
    

    
}




void TUIOComponent::updateTuioCursor(TuioCursor *tcur){
    
    if (parentComponent)
        if(ComponentPeer* const peer = parentComponent->getPeer()){
            int xOffset=0;
            Point<float> tstPoint  =  parentComponent->getPeer()->localToGlobal(Point<float>(0,0));
            Desktop::Displays::Display dis = Desktop::getInstance().getDisplays().getDisplayContaining(Point<int>(tstPoint.getX(),tstPoint.getY()));
            Rectangle<int> TUIOArea = dis.totalArea;
            if(dis.isMain==false){
                xOffset = Desktop::getInstance().getDisplays().getMainDisplay().totalArea.getWidth();
            }
            
        Point<float> global(xOffset + ((tcur)->getX())* TUIOArea.getWidth(),
                            ((tcur)->getY())* TUIOArea.getHeight()
                            );
        Point<float> local = peer->globalToLocal (global);

            if(tcur->getCursorID() < dbgDraw.size()){
        dbgDraw[tcur->getCursorID()]->setTopLeftPosition(local.getX(),local.getY());
            }
        DBG("Mouse " << (tcur)->getCursorID() << " :" << (tcur)->getX() <<"," << (tcur)->getY() <<" / " <<  local.toString() <<"," <<  global.toString());
        ModifierKeys mods;
        peer->handleMouseEvent ((tcur)->getCursorID()+TUIOTOUCH0,
                                local
                                , mods.withFlags(ModifierKeys::leftButtonModifier),
                                MouseInputSource::invalidPressure, Time::currentTimeMillis());
    }
    
    

    
}




void TUIOComponent::removeTuioCursor(TuioCursor *tcur){
    if(tcur->getCursorID() < dbgDraw.size()){
        dbgDraw.remove(tcur->getCursorID());
    }
    
    
}