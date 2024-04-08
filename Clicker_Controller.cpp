//
// Created by Kamil Basiorka on 03/04/2024.
//

#include "Clicker_Controller.h"
#include "Clicker_Model.h"

void Clicker_Controller::run_game() {
    view.displayWelcome();

    char choice = view.getChoice();
      if (choice == menu_NewGame) {
        model;
    }
    else if (choice == menu_OldGame) {
        model.loadGame();
    }
    else {
        view.displayInvalidChoice();
        return;
    }

    do {
        view.displayLevel(model.getLevel());
        view.displayPoints(model.getPoints());
        choice = view.getInput();

        if (choice == key_click) {
            model.click();
        }
        else if (choice != key_exit) {
            view.displayWrongKey();
        }    
    } 
    while (choice != key_exit);
    model.saveGame();
    view.displayGoodbye(model.getPoints(), model.getLevel());
}


