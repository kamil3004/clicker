//
// Created by Kamil Basiorka on 03/04/2024.
//

#ifndef CLICKER_CLICKER_CONTROLLER_H
#define CLICKER_CLICKER_CONTROLLER_H
#include"Clicker_Model.h"
#include"Clicker_View.h"

class Clicker_Controller {
private:
    Clicker_Model model;
    Clicker_View view;
    const char key_click ='b';
    const char key_exit ='e';
    const char menu_NewGame = '1';
    const char menu_OldGame = '2';
public:
    void run_game();
};

// doda jakies znaczniki 
#endif //CLICKER_CLICKER_CONTROLLER_H
