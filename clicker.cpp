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

int	Clicker_Model::getPoints() const {

		return points;
	}
int Clicker_Model::getLevel() const {

	return level;
}



class Clicker_View {
public:
	void displayPoints(int points) const;
	void displayLevel(int level) const;
	void displayWelcome() const;
	void displayGoodbye(int points, int level) const;
	char getInput() const;
};
void Clicker_View::displayPoints(int points) const {
	std::cout << "Points: " << points << std::endl;
}

void Clicker_View::displayLevel(int level) const {
	std::cout << "Level: " << level << std::endl;
}

void Clicker_View::displayWelcome() const {
	std::cout << "Hello, welcome in Clicker !" <<std::endl;

}

void Clicker_View::displayGoodbye(int points, int level) const {
	std::cout << "Thanks for game !" << std::endl;
	std::cout << "Final Level : "<< level<< std::endl;
	std::cout << "Final Points : " << points << std::endl;
}

char Clicker_View::getInput() const {
	char choice;
	std::cout << "Click (b) to play or (e) to quit "<<std::endl;
	std::cin >> choice;
	return choice;
}

class Clicker_Controller {
private:
	Clicker_Model model;
	Clicker_View view;
public:
	void run_game();
};

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

	} while (choice != 'e');
		view.displayGoodbye(model.getPoints(), model.getLevel());


}

int main()
{
	Clicker_Controller controller;
	controller.run_game();
	
	return 0;

}
