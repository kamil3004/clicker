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
public:
    void run_game();
};


#endif //CLICKER_CLICKER_CONTROLLER_H
