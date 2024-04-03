#include <iostream>
#include <string>
#include <vector>
#include "Clicker_Model.h"
#include "Clicker_Controller.h"
#include "Clicker_View.h"

using namespace std;

int main()
{
    Clicker_Model model;
	Clicker_Controller controller;
	controller.run_game();

	return 0;
}