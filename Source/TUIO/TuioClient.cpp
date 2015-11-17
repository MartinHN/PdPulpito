/*
 TUIO C++ Library - part of the reacTIVision project
 http://reactivision.sourceforge.net/
 
 Copyright (c) 2005-2009 Martin Kaltenbrunner <mkalten@iua.upf.edu>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "TuioClient.h"

using namespace TUIO;





TuioClient::TuioClient(Component * comp,int port)
:
currentFrame(-1)
, maxCursorID (-1)
,parentComponent(comp)
, locked      (false)
, connected   (false)
{
    
    if(!osc.connect(port)){
        jassertfalse;
    };
    osc.addListener(this);
}

TuioClient::~TuioClient() {
	
}



void TuioClient::oscMessageReceived (const OSCMessage& message)  {
    
    

    if( message.getAddressPattern() == "/tuio/2Dcur" ) {
        String cmd;
        cmd = message[0].getString();
        
        if (cmd == "set") {
            
            int32 s_id;
            float xpos, ypos, xspeed, yspeed, maccel;
            s_id=message[1].getInt32();
            xpos=message[2].getFloat32();
            ypos=message[3].getFloat32();
            xspeed =message[4].getFloat32();
            yspeed=message[5].getFloat32();
            maccel=message[6].getFloat32();
            

            std::list<TuioCursor*>::iterator tcur;
            for (tcur=cursorList.begin(); tcur!= cursorList.end(); tcur++)
                if((*tcur)->getSessionID()==(long)s_id) break;
            
            if (tcur==cursorList.end()) {
                
                TuioCursor *addCursor = new TuioCursor((long)s_id,-1,xpos,ypos);
                frameCursors.push_back(addCursor);
                
            } else if ( ((*tcur)->getX()!=xpos) || ((*tcur)->getY()!=ypos) || ((*tcur)->getXSpeed()!=xspeed) || ((*tcur)->getYSpeed()!=yspeed) || ((*tcur)->getMotionAccel()!=maccel) ) {
                
                TuioCursor *updateCursor = new TuioCursor((long)s_id,(*tcur)->getCursorID(),xpos,ypos);
                updateCursor->update(xpos,ypos,xspeed,yspeed,maccel);
                frameCursors.push_back(updateCursor);
                
                
                Desktop::Displays::Display dis = Desktop::getInstance().getDisplays().getMainDisplay();

                
                if (ComponentPeer* const peer = parentComponent->getPeer())
                    peer->handleMouseEvent ((*tcur)->getCursorID(),
                                            peer->globalToLocal (Point<float>((*tcur)->getX()* dis.totalArea.getWidth(),
                                                                              (*tcur)->getY()* dis.totalArea.getHeight()
                                                                                                      ))
                                            , 0,
                                            MouseInputSource::invalidPressure, Time::currentTimeMillis());
                
            }
            
           
            
            
        } else if (cmd=="alive") {
            
            aliveCursorList.clear();
            for(int i = 1; i < message.size() ; i++) {
                aliveCursorList.push_back(message[i].getInt32());
            }
            
        } else if( cmd== "fseq"  ){
            
            int32 fseq;
            fseq = message[1].getInt32();
            bool lateFrame = false;
            if (fseq>0) {
                if (fseq>currentFrame) currentTime = TuioTime::getSessionTime();
                if ((fseq>=currentFrame) || ((currentFrame-fseq)>100)) currentFrame = fseq;
                else lateFrame = true;
            }  else if ((TuioTime::getSessionTime().getTotalMilliseconds()-currentTime.getTotalMilliseconds())>100) {
                currentTime = TuioTime::getSessionTime();
            }
			
            if (!lateFrame) {
                
//                lockCursorList();
                // find the removed cursors first
                for (std::list<TuioCursor*>::iterator tcur=cursorList.begin(); tcur != cursorList.end(); tcur++) {
                    std::list<long>::iterator iter = find(aliveCursorList.begin(), aliveCursorList.end(), (*tcur)->getSessionID());
                    
                    if (iter == aliveCursorList.end()) {
                        (*tcur)->remove(currentTime);
                        frameCursors.push_back(*tcur);
                    }
                }
//                unlockCursorList();
                
                for (std::list<TuioCursor*>::iterator iter=frameCursors.begin(); iter != frameCursors.end(); iter++) {
                    TuioCursor *tcur = (*iter);
                    
                    int c_id = -1;
                    TuioCursor *frameCursor = NULL;
                    switch (tcur->getTuioState()) {
                        case TUIO_REMOVED:
                            frameCursor = tcur;
                            frameCursor->remove(currentTime);
                            
                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
                                (*listener)->removeTuioCursor(frameCursor);
                            
//                            lockCursorList();
                            for (std::list<TuioCursor*>::iterator delcur=cursorList.begin(); delcur!=cursorList.end(); delcur++) {
                                if((*delcur)->getSessionID()==frameCursor->getSessionID()) {
                                    cursorList.erase(delcur);
                                    break;
                                }
                            }
                            
                            if (frameCursor->getCursorID()==maxCursorID) {
                                maxCursorID = -1;
                                delete frameCursor;
                                
                                if (cursorList.size()>0) {
                                    std::list<TuioCursor*>::iterator clist;
                                    for (clist=cursorList.begin(); clist != cursorList.end(); clist++) {
                                        c_id = (*clist)->getCursorID();
                                        if (c_id>maxCursorID) maxCursorID=c_id;
                                    }
                                    
                                    freeCursorBuffer.clear();
                                    for (std::list<TuioCursor*>::iterator flist=freeCursorList.begin(); flist != freeCursorList.end(); flist++) {
                                        TuioCursor *freeCursor = (*flist);
                                        if (freeCursor->getCursorID()>maxCursorID) delete freeCursor;
                                        else freeCursorBuffer.push_back(freeCursor);
                                    }
                                    freeCursorList = freeCursorBuffer;
                                    
                                } else {
                                    for (std::list<TuioCursor*>::iterator flist=freeCursorList.begin(); flist != freeCursorList.end(); flist++) {
                                        TuioCursor *freeCursor = (*flist);
                                        delete freeCursor;
                                    }
                                    freeCursorList.clear();
                                }
                            } else if (frameCursor->getCursorID()<maxCursorID) {
                                freeCursorList.push_back(frameCursor);
                            }
                            
//                            unlockCursorList();
                            break;
                        case TUIO_ADDED:
                            
//                            lockCursorList();
                            c_id = (int)cursorList.size();
                            if (((int)(cursorList.size())<=maxCursorID) && ((int)(freeCursorList.size())>0)) {
                                std::list<TuioCursor*>::iterator closestCursor = freeCursorList.begin();
                                
                                for(std::list<TuioCursor*>::iterator iter = freeCursorList.begin();iter!= freeCursorList.end(); iter++) {
                                    if((*iter)->getDistance(tcur)<(*closestCursor)->getDistance(tcur)) closestCursor = iter;
                                }
                                
                                TuioCursor *freeCursor = (*closestCursor);
                                c_id = freeCursor->getCursorID();
                                freeCursorList.erase(closestCursor);
                                delete freeCursor;
                            } else maxCursorID = c_id;
                            
                            frameCursor = new TuioCursor(currentTime,tcur->getSessionID(),c_id,tcur->getX(),tcur->getY());
                            cursorList.push_back(frameCursor);
                            
                            delete tcur;
//                            unlockCursorList();
                            
                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
                                (*listener)->addTuioCursor(frameCursor);
                            
                            break;
                        default:
                            
//                            lockCursorList();
                            std::list<TuioCursor*>::iterator iter;
                            for (iter=cursorList.begin(); iter != cursorList.end(); iter++) {
                                if((*iter)->getSessionID()==tcur->getSessionID()) {
                                    frameCursor = (*iter);
                                    break;
                                }
                            }
                            
                            if ( (tcur->getX()!=frameCursor->getX() && tcur->getXSpeed()==0) || (tcur->getY()!=frameCursor->getY() && tcur->getYSpeed()==0) )
                                frameCursor->update(currentTime,tcur->getX(),tcur->getY());
                            else
                                frameCursor->update(currentTime,tcur->getX(),tcur->getY(),tcur->getXSpeed(),tcur->getYSpeed(),tcur->getMotionAccel());
                            
                            delete tcur;
//                            unlockCursorList();
                            
                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
                                (*listener)->updateTuioCursor(frameCursor);
                    }	
                }
                
                for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
                    (*listener)->refresh(currentTime);
                
            } else {
                for (std::list<TuioCursor*>::iterator iter=frameCursors.begin(); iter != frameCursors.end(); iter++) {
                    TuioCursor *tcur = (*iter);
                    delete tcur;
                }
            }
            
            frameCursors.clear();
        }
    }
    else if( message.getAddressPattern()== "/tuio/2Dobj" ){
        
        //        String cmd = message[0].getString();
        //
        //        if (cmd=="set") {
        //
        //            int32 s_id, c_id;
        //            float xpos, ypos, angle, xspeed, yspeed, rspeed, maccel, raccel;
        //            s_id=message[1].getInt32();
        //            c_id=message[2].getInt32();
        //            xpos=message[3].getFloat32();
        //            ypos=message[4].getFloat32();
        //            angle=message[5].getFloat32();
        //            xspeed =message[6].getFloat32();
        //            yspeed=message[7].getFloat32();
        //            rspeed=message[8].getFloat32();
        //            maccel=message[9].getFloat32();
        //            raccel=message[10].getFloat32();
        //
        //            lockObjectList();
        //            std::list<TuioObject*>::iterator tobj;
        //            for (tobj=objectList.begin(); tobj!= objectList.end(); tobj++)
        //                if((*tobj)->getSessionID()==(long)s_id) break;
        //
        //            if (tobj == objectList.end()) {
        //
        //                TuioObject *addObject = new TuioObject((long)s_id,(int)c_id,xpos,ypos,angle);
        //                frameObjects.push_back(addObject);
        //
        //            } else if ( ((*tobj)->getX()!=xpos) || ((*tobj)->getY()!=ypos) || ((*tobj)->getAngle()!=angle) || ((*tobj)->getXSpeed()!=xspeed) || ((*tobj)->getYSpeed()!=yspeed) || ((*tobj)->getRotationSpeed()!=rspeed) || ((*tobj)->getMotionAccel()!=maccel) || ((*tobj)->getRotationAccel()!=raccel) ) {
        //
        //                TuioObject *updateObject = new TuioObject((long)s_id,(*tobj)->getSymbolID(),xpos,ypos,angle);
        //                updateObject->update(xpos,ypos,angle,xspeed,yspeed,rspeed,maccel,raccel);
        //                frameObjects.push_back(updateObject);
        //
        //            }
        //            unlockObjectList();
        //
        //        }
        //        else if (cmd=="alive") {
        //
        //            aliveObjectList.clear();
        //            for(int i = 1 ; i < message.size() ; i++){
        //                aliveObjectList.push_back(message[i].getInt32());
        //            }
        //
        //        } else if (cmd == "fseq") {
        //
        //            int32 fseq;
        //            fseq = message[1].getInt32();
        //            bool lateFrame = false;
        //            if (fseq>0) {
        //                if (fseq>currentFrame) currentTime = TuioTime::getSessionTime();
        //                if ((fseq>=currentFrame) || ((currentFrame-fseq)>100)) currentFrame = fseq;
        //                else lateFrame = true;
        //            } else if ((TuioTime::getSessionTime().getTotalMilliseconds()-currentTime.getTotalMilliseconds())>100) {
        //                currentTime = TuioTime::getSessionTime();
        //            }
        //
        //            if (!lateFrame) {
        //
        //                lockObjectList();
        //                //find the removed objects first
        //                for (std::list<TuioObject*>::iterator tobj=objectList.begin(); tobj != objectList.end(); tobj++) {
        //                    std::list<long>::iterator iter = find(aliveObjectList.begin(), aliveObjectList.end(), (*tobj)->getSessionID());
        //                    if (iter == aliveObjectList.end()) {
        //                        (*tobj)->remove(currentTime);
        //                        frameObjects.push_back(*tobj);
        //                    }
        //                }
        //                unlockObjectList();
        //
        //                for (std::list<TuioObject*>::iterator iter=frameObjects.begin(); iter != frameObjects.end(); iter++) {
        //                    TuioObject *tobj = (*iter);
        //
        //                    TuioObject *frameObject = NULL;
        //                    switch (tobj->getTuioState()) {
        //                        case TUIO_REMOVED:
        //                            frameObject = tobj;
        //                            frameObject->remove(currentTime);
        //
        //                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
        //                                (*listener)->removeTuioObject(frameObject);
        //
        //                            lockObjectList();
        //                            for (std::list<TuioObject*>::iterator delobj=objectList.begin(); delobj!=objectList.end(); delobj++) {
        //                                if((*delobj)->getSessionID()==frameObject->getSessionID()) {
        //                                    objectList.erase(delobj);
        //                                    break;
        //                                }
        //                            }
        //                            unlockObjectList();
        //                            break;
        //                        case TUIO_ADDED:
        //
        //                            lockObjectList();
        //                            frameObject = new TuioObject(currentTime,tobj->getSessionID(),tobj->getSymbolID(),tobj->getX(),tobj->getY(),tobj->getAngle());
        //                            objectList.push_back(frameObject);
        //                            unlockObjectList();
        //
        //                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
        //                                (*listener)->addTuioObject(frameObject);
        //
        //                            break;
        //                        default:
        //
        //                            lockObjectList();
        //                            std::list<TuioObject*>::iterator iter;
        //                            for (iter=objectList.begin(); iter != objectList.end(); iter++) {
        //                                if((*iter)->getSessionID()==tobj->getSessionID()) {
        //                                    frameObject = (*iter);
        //                                    break;
        //                                }
        //                            }
        //                            if(iter==objectList.end()) break;
        //
        //                            if ( (tobj->getX()!=frameObject->getX() && tobj->getXSpeed()==0) || (tobj->getY()!=frameObject->getY() && tobj->getYSpeed()==0) )
        //                                frameObject->update(currentTime,tobj->getX(),tobj->getY(),tobj->getAngle());
        //                            else
        //                                frameObject->update(currentTime,tobj->getX(),tobj->getY(),tobj->getAngle(),tobj->getXSpeed(),tobj->getYSpeed(),tobj->getRotationSpeed(),tobj->getMotionAccel(),tobj->getRotationAccel());
        //                            unlockObjectList();
        //                            
        //                            for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
        //                                (*listener)->updateTuioObject(frameObject);
        //                            
        //                    }
        //                    delete tobj;
        //                }
        //                
        //                for (std::list<TuioListener*>::iterator listener=listenerList.begin(); listener != listenerList.end(); listener++)
        //                    (*listener)->refresh(currentTime);
        //                
        //            } else {
        //                for (std::list<TuioObject*>::iterator iter=frameObjects.begin(); iter != frameObjects.end(); iter++) {
        //                    TuioObject *tobj = (*iter);
        //                    delete tobj;
        //                }
        //            }
        //            
        //            frameObjects.clear();
        //        }
    }
	
}



void TuioClient::addTuioListener(TuioListener *listener) {
	listenerList.push_back(listener);
}

void TuioClient::removeTuioListener(TuioListener *listener) {
	std::list<TuioListener*>::iterator result = find(listenerList.begin(),listenerList.end(),listener);
	if (result!=listenerList.end()) listenerList.remove(listener);
}

TuioObject* TuioClient::getTuioObject(long s_id) {
//	lockObjectList();
	for (std::list<TuioObject*>::iterator iter=objectList.begin(); iter != objectList.end(); iter++) {
		if((*iter)->getSessionID()==s_id) {
//			unlockObjectList();
			return (*iter);
		}
	}	
//	unlockObjectList();
	return NULL;
}

TuioCursor* TuioClient::getTuioCursor(long s_id) {
//	lockCursorList();
	for (std::list<TuioCursor*>::iterator iter=cursorList.begin(); iter != cursorList.end(); iter++) {
		if((*iter)->getSessionID()==s_id) {
//			unlockCursorList();
			return (*iter);
		}
	}	
//	unlockCursorList();
	return NULL;
}

std::list<TuioObject*> TuioClient::getTuioObjects() {
//	lockObjectList();
	std::list<TuioObject*> listBuffer = objectList;
//	unlockObjectList();
	return listBuffer;
}

std::list<TuioCursor*> TuioClient::getTuioCursors() {
//	lockCursorList();
	std::list<TuioCursor*> listBuffer = cursorList;
//	unlockCursorList();
	return listBuffer;
}


