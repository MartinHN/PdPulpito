//
//  PdPopup.h
//  PdPulpito
//
//  Created by martin hermant on 03/12/15.
//
//

#ifndef PdPulpito_PdPopup_h
#define PdPulpito_PdPopup_h



#include "PdComponent.h"

class PdPopup : public PdComponent,MenuBarModelListener{
public:
    PdPopup(PdParameter * p):PdComponent(p){
        model = new PopupModel(p->getDesc()->elements);
        
        MenuBarComponent  * popup = new MenuBarComponent ();
        
        component = popup;
        addAndMakeVisible(component);
        popup->setModel(model);
        model->addListener(this);
    }
    ~PdPopup(){
        // hack cause JUCE complaining for weird reasons if not done manually
        getMenuBar()->setModel(nullptr);
    };
    
    String getStringSelected(){return model->getName();}
    
    
    void setValue(float f,NotificationType n) override{
    model->setSelected((int)f,n==sendNotification);
//    getToggle()->setToggleState(f>0, n);
    }

    
    class PopupModel : public MenuBarModel{
        
    public:
        PopupModel(StringArray r):options(r){
            for(auto & t:options){menu.addItem(&t - &options[0] + 1, t);}
            if(options.size()>0){setName(options.getReference(0));}
            
            
            else {
                String dumb("empty");
                setName(dumb);
            }
            numSelected = 0;
        }
        /** This method must return a list of the names of the menus. */
        virtual StringArray getMenuBarNames(){
            return name;
        };
        
        /** This should return the popup menu to display for a given top-level menu.
         
         @param topLevelMenuIndex    the index of the top-level menu to show
         @param menuName             the name of the top-level menu item to show
         */
        virtual PopupMenu getMenuForIndex (int topLevelMenuIndex,
                                           const String& menuName) {
            return menu;
        };
        
        /** This is called when a menu item has been clicked on.
         
         @param menuItemID           the item ID of the PopupMenu item that was selected
         @param topLevelMenuIndex    the index of the top-level menu from which the item was
         chosen (just in case you've used duplicate ID numbers
         on more than one of the popup menus)
         */
        virtual void menuItemSelected (int menuItemID,
                                       int topLevelMenuIndex) {
            if(menuItemID>0){
                setSelected(numSelected);
                
            }
            
        
        };
        
        
        void setName (String & _name){
            name.clear();
            name.add(_name);
        }
        
        
        String getName(){
            return name.getReference(0);
        }
        int getNumSelected(){
            return numSelected;
        }
        
        void setSelected(int _numSelected,bool notify = true){
            numSelected = _numSelected;
            setName(options.getReference(numSelected));
            if(notify)menuItemsChanged();
        }
        
        int numSelected;
        PopupMenu menu;
        StringArray options;
        StringArray name;
    };
    

ScopedPointer<PopupModel> model;
    



MenuBarComponent* getMenuBar(){return (MenuBarComponent*) component.get();}

//==============================================================================
/** This callback is made when items are changed in the menu bar model. */
virtual void menuBarItemsChanged (MenuBarModel* menuBarModel) {
    component->repaint();
    setValueFromGUI(model->getNumSelected());
};

/** This callback is made when an application command is invoked that
 is represented by one of the items in the menu bar model.
 */
virtual void menuCommandInvoked (MenuBarModel* menuBarModel,
                                 const ApplicationCommandTarget::InvocationInfo& info) {};

};


#endif
