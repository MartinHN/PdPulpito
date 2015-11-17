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

#ifndef INCLUDED_TUIOCLIENT_H
#define INCLUDED_TUIOCLIENT_H







#include "TuioListener.h"
#include "TuioObject.h"
#include "TuioCursor.h"
#include "juceHeader.h"

namespace TUIO {
	
	/**
	 * <p>The TuioClient class is the central TUIO protocol decoder component. It provides a simple callback infrastructure using the {@link TuioListener} interface.
	 * In order to receive and decode TUIO messages an instance of TuioClient needs to be created. The TuioClient instance then generates TUIO events
	 * which are broadcasted to all registered classes that implement the {@link TuioListener} interface.</p> 
	 * <p><code>
	 * TuioClient *client = new TuioClient();<br/>
	 * client->addTuioListener(myTuioListener);<br/>
	 * client->connect();<br/>
	 * </code></p>
	 *
	 * @author Martin Kaltenbrunner
	 * @version 1.4
	 */ 
	class TuioClient :public OSCReceiver::Listener<> {
		
	public:
		/**
		 * This constructor creates a TuioClient that listens to the provided port
		 *
		 * @param  port  the incoming TUIO UDP port number, defaults to 3333 if no argument is provided
		 */
		TuioClient(Component * comp,int port=3333);

		/**
		 * The destructor is doing nothing in particular. 
		 */
		~TuioClient();
		
		/**
		 * The TuioClient starts listening to TUIO messages on the configured UDP port
		 * All received TUIO messages are decoded and the resulting TUIO events are broadcasted to all registered TuioListeners
		 *
		 * @param  lock  running in the background if set to false (default)
		 */
		void connect(bool lock=false);

		/**
		 * The TuioClient stops listening to TUIO messages on the configured UDP port
		 */
		void disconnect();

		/**
		 * Returns true if this TuioClient is currently connected.
		 * @return	true if this TuioClient is currently connected
		 */
		bool isConnected() { return connected; }
				
		/**
		 * Adds the provided TuioListener to the list of registered TUIO event listeners
		 *
		 * @param  listener  the TuioListener to add
		 */
		void addTuioListener(TuioListener *listener);

		/**
		 * Removes the provided TuioListener from the list of registered TUIO event listeners
		 *
		 * @param  listener  the TuioListener to remove
		 */
		void removeTuioListener(TuioListener *listener);

		/**
		 * Removes all TuioListener from the list of registered TUIO event listeners
		 */
		void removeAllTuioListeners() {	
			listenerList.clear();
		}

		/**
		 * Returns a List of all currently active TuioObjects
		 *
		 * @return  a List of all currently active TuioObjects
		 */
		std::list<TuioObject*> getTuioObjects();
		
		/**
		 * Returns a List of all currently active TuioCursors
		 *
		 * @return  a List of all currently active TuioCursors
		 */
		std::list<TuioCursor*> getTuioCursors();

		/**
		 * Returns the TuioObject corresponding to the provided Session ID
		 * or NULL if the Session ID does not refer to an active TuioObject
		 *
		 * @return  an active TuioObject corresponding to the provided Session ID or NULL
		 */
		TuioObject* getTuioObject(long s_id);

		/**
		 * Returns the TuioCursor corresponding to the provided Session ID
		 * or NULL if the Session ID does not refer to an active TuioCursor
		 *
		 * @return  an active TuioCursor corresponding to the provided Session ID or NULL
		 */
		TuioCursor* getTuioCursor(long s_id);

				
	protected:

        void oscMessageReceived (const OSCMessage& message) ;
		
	private:
		std::list<TuioListener*> listenerList;
		
		std::list<TuioObject*> objectList, frameObjects;
		std::list<long> aliveObjectList;
		std::list<TuioCursor*> cursorList, frameCursors;
		std::list<long> aliveCursorList;
		
		int currentFrame;
		TuioTime currentTime;
			
		std::list<TuioCursor*> freeCursorList, freeCursorBuffer;
		int maxCursorID;
		
        OSCReceiver osc;
				
		bool locked;
		bool connected;
        
        Component * parentComponent;
	};
};
#endif /* INCLUDED_TUIOCLIENT_H */
