//
//  TUIOComponent.h
//  PdPulpito
//
//  Created by martin hermant on 18/11/15.
//
//

#ifndef __PdPulpito__TUIOComponent__
#define __PdPulpito__TUIOComponent__


#include "TuioListener.h"
#include "TuioClient.h"
#include "JuceHeader.h"

using namespace TUIO;
class TUIOComponent : public TuioListener

{
    public :
    
    
    TUIOComponent(Component * comp):parentComponent(comp){
        getGlobalTuioClient()->addTuioListener(this);
        numJuceListener++;

    };
    
    
    ~TUIOComponent(){
        getGlobalTuioClient()->removeTuioListener(this);
        numJuceListener--;
        if(numJuceListener<=0){
            delete TUIOClient;
            TUIOClient = nullptr;
        }
    }

    /**
     * This callback method is invoked by the TuioClient when a new TuioObject is added to the session.
     *
     * @param  tobj  the TuioObject reference associated to the addTuioObject event
     */
    virtual void addTuioObject(TuioObject *tobj){};
    
    /**
     * This callback method is invoked by the TuioClient when an existing TuioObject is updated during the session.
     *
     * @param  tobj  the TuioObject reference associated to the updateTuioObject event
     */
    virtual void updateTuioObject(TuioObject *tobj){};
    
    /**
     * This callback method is invoked by the TuioClient when an existing TuioObject is removed from the session.
     *
     * @param  tobj  the TuioObject reference associated to the removeTuioObject event
     */
    virtual void removeTuioObject(TuioObject *tobj){};
    
    /**
     * This callback method is invoked by the TuioClient when a new TuioCursor is added to the session.
     *
     * @param  tcur  the TuioCursor reference associated to the addTuioCursor event
     */
    virtual void addTuioCursor(TuioCursor *tcur);
    
    /**
     * This callback method is invoked by the TuioClient when an existing TuioCursor is updated during the session.
     *
     * @param  tcur  the TuioCursor reference associated to the updateTuioCursor event
     */
    virtual void updateTuioCursor(TuioCursor *tcur);
    
    /**
     * This callback method is invoked by the TuioClient when an existing TuioCursor is removed from the session.
     *
     * @param  tcur  the TuioCursor reference associated to the removeTuioCursor event
     */
    virtual void removeTuioCursor(TuioCursor *tcur);
    
    /**
     * This callback method is invoked by the TuioClient to mark the end of a received TUIO message bundle.
     *
     * @param  ftime  the TuioTime associated to the current TUIO message bundle
     */
    virtual void refresh(TuioTime ftime){};
    
    Point<float> getScreenPos(TuioCursor * tcur);
    
    typedef enum {
        ADD,
        UPDATE,
        REMOVE
    }drawCmd;
    void drawCursor(TuioCursor * tcur,Point<float>& pos,drawCmd cmd);
    
    static TuioClient *  TUIOClient;
    TuioClient * getGlobalTuioClient(){if(TUIOClient ==nullptr){TUIOClient = new TuioClient(3333);TUIOClient->removeAllTuioListeners();}return TUIOClient;}
    Component * parentComponent;
    static int numJuceListener ;
    OwnedArray<DrawablePath> dbgDraw;
};

#endif /* defined(__PdPulpito__TUIOComponent__) */
