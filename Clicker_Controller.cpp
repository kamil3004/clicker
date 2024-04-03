//
// Created by Kamil Basiorka on 03/04/2024.
//

#include "Clicker_Controller.h"
void Clicker_Controller::run_game() {
    view.displayWelcome();

    char choice;
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

    } while (choice != 'e');
    view.displayGoodbye(model.getPoints(), model.getLevel());
}
