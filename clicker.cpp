// clicker.cpp: definiuje punkt wejścia dla aplikacji.
//

#include <iostream>

using namespace std;

class Clicker_Model {
private:
	int points;
	int level;
public:
	Clicker_Model();
	void click();
	int getPoints() const;
	int getLevel() const;

};
Clicker_Model::Clicker_Model() : points(0), level(1) {};
	void Clicker_Model::click() {
		points++;
		if (points % 5 == 0) 
		{
			level++;
		}
	}



class Clicker_View {
public:
	void displayPoints(int points) const;
	void displayLevel(int level) const;
	char getInput() const;


};
void Clicker_View::displayPoints(int points) const {
	std::cout << "Points: " << points << std::endl;
}

void Clicker_View::displayLevel(int level) const {
	std::cout << "Level: " << level << std::endl;
}

char Clicker_View::getInput() const {
	char choice;
	std::cout << "Click (b) to play or (e) to quit ";
	std::cin >> choice;
	return choice;
}


class Clicker_Controller {
private:
	Clicker_Model model;
	Clicker_View view;
public:
	void run_game();
	char choice;
};

void Clicker_Controller::run_game() {



}

int main()
{
	cout << "Hello CMake." << endl;
	return 0;
}
