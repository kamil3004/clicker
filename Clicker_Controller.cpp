//
// Created by Kamil Basiorka on 03/04/2024.
//

#include "Clicker_Controller.h"
#include "Clicker_Model.h"

void Clicker_Controller::run_game() {
    view.displayWelcome();

    char choice = view.getChoice();
      if (choice == '1') {
        model = model;
    }
    else if (choice == '2') {
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

        if (choice =='b') {
            model.click();
        }
        else if (choice != 'e') {
            view.displayWrongKey();
        }    
    } 
    while (choice != 'e');
    model.saveGame();
    view.displayGoodbye(model.getPoints(), model.getLevel());
}
