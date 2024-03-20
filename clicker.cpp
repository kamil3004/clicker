#include <iostream>
#include <string>
#include <vector>


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
	std::string convertToRoman(int num) const;
	void displayWrongKey() const;
};
void Clicker_View::displayPoints(int points) const {
	std::cout << "Points: " << points << std::endl;
}

void Clicker_View::displayLevel(int level) const {
	std::cout << "Level: " << convertToRoman(level)<< std::endl;
}

void Clicker_View::displayWelcome() const {
	std::cout << "Hello, welcome in the Clicker !" <<std::endl;

}

void Clicker_View::displayGoodbye(int points, int level) const {
	std::cout << "Thanks for game !" << std::endl;
	std::cout << "Final Level : "<< convertToRoman(level) << std::endl;
	std::cout << "Final Points : " << points << std::endl;
}

char Clicker_View::getInput() const {
	char choice;
	std::cout << "Click (b) to play or (e) to exit "<<std::endl;
	std::cin >> choice;
	return choice;
}
std::string Clicker_View::convertToRoman(int num) const {
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

void Clicker_View::displayWrongKey() const {

	std::cout << "Wrong key!!! Please try again." << std::endl;
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
		else if (choice != 'e') {
			view.displayWrongKey();
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