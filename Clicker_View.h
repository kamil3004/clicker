//
// Created by Kamil Basiorka on 03/04/2024.
//

#ifndef CLICKER_CLICKER_VIEW_H
#define CLICKER_CLICKER_VIEW_H




class Clicker_View {
public:
    void displayPoints(int points) const;
    void displayLevel(int level) const;
    void displayWelcome() const;
    void displayGoodbye(int points, int level) const;
    char getInput() const;
    void displayWrongKey() const;
};


#endif //CLICKER_CLICKER_VIEW_H
