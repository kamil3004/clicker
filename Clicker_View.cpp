//
// Created by Kamil Basiorka on 03/04/2024.
//

#include "Clicker_View.h"
#include "Clicker_Model.h"
#include <iostream>
#include <vector>

using namespace std;
Clicker_Model model_V;
void Clicker_View::displayPoints(int points) const {
    std::cout << "Points: " << points << std::endl;
}

void Clicker_View::displayLevel(int level) const {
    std::cout << "Level: " << model_V.convertToRoman(level)<< std::endl;
}

void Clicker_View::displayWelcome() const {
    std::cout << "Hello, welcome in the Clicker !" <<std::endl;
    std::cout << "1. Start a new game" << std::endl;
    std::cout << "2. Load a saved game" << std::endl;
}

void Clicker_View::displayGoodbye(int points, int level) const {
    std::cout << "Thanks for game !" << std::endl;
    std::cout << "Final Level : "<< model_V.convertToRoman(level) << std::endl;
    std::cout << "Final Points : " << points << std::endl;
}

char Clicker_View::getInput() const {
    char choice;
    std::cout << "Click (b) to play or (e) to exit "<<std::endl;
    std::cin >> choice;
    return choice;
}


void Clicker_View::displayWrongKey() const {

    std::cout << "Wrong key!!! Please try again." << std::endl;
}
char Clicker_View::getChoice() {
    char choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}
void Clicker_View::displayInvalidChoice()  {
    std::cout << "Invalid choice. Please try again." << std::endl;
}

