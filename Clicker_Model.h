//
// Created by Kamil Basiorka on 03/04/2024.
//

#ifndef CLICKER_CLICKER_MODEL_H
#define CLICKER_CLICKER_MODEL_H
#include <string>

class Clicker_Model {
private:
    int points;
    int level;
    std::string saveFile;

public:
    Clicker_Model();
    void click();
    int getPoints() const;
    int getLevel() const;
    std::string convertToRoman(int num) const;
    void loadGame();
    void saveGame();
};


#endif //CLICKER_CLICKER_MODEL_H
