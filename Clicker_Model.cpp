//
// Created by Kamil Basiorka on 03/04/2024.
//

#include "Clicker_Model.h"
#include <iostream>
#include <vector>
#include <fstream>

Clicker_Model::Clicker_Model() : points(0), level(1) ,saveFile("game_state.txt") {};
void Clicker_Model::click() {
    points++;
    if (points % 5 == 0)
    {
        level++;
    }
}

int	Clicker_Model::getPoints() const {

    return points;
}
int Clicker_Model::getLevel() const {

    return level;
}
std::string Clicker_Model::convertToRoman(int num) const { // przenieść do modelu
    if (num <= 0 || num > 3999)
        return "Invalid";

    std::string result = "";
    std::vector<int> values = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    std::vector<std::string> symbols = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    for (int i = 0; i < values.size(); i++) {
        while (num >= values[i]) {
            num -= values[i];
            result += symbols[i];
        }
    }

    return result;
}
