/*********************************************************************
** Program Filename: main.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-03-04
** Description: cpp file with main() for CS162_400 Lab 9
*********************************************************************/

//includes
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <queue>
#include <deque>
#include "queue.hpp"
#include "stack.hpp"

//usings
using std::cout;
using std::endl;
using std::cin;
using std::srand;
using std::rand;
using std::string;
using std::queue;
using std::deque;

//function prototypes
void buffer();
void palindrome();

int main()
{
	//initialize random number generator
	srand((unsigned)time(NULL));

	//function prototypes
	void displayMenu();
	int getInput();

	bool done = false;
	int choice = 0;
	int intIn1;
	int intIn2;
	int intIn3;

	while (done != true) {
		displayMenu();
		choice = getInput();
		switch (choice) {
		case 1:	
			intIn1 = 0;
			intIn2 = 0;
			intIn3 = 0;
			while (intIn1 > 100 || intIn1 < 1)
			{
				cout << "Enter an integer (1-100) that will be the percentage chance" << endl;
				cout << "that an item is ADDED to the queue: ";
				std::cin.ignore();
				std::cin >> intIn1;
				if (intIn1 > 100 || intIn1 < 1) cout << "Invalid entry. Entry must be 1 - 100" << endl;
				cout << endl;
			}

			while (intIn2 > 100 || intIn2 < 1)
			{
				cout << "Enter an integer (1-100) that will be the percentage chance" << endl;
				cout << "that an item is REMOVED from the queue: ";
				std::cin.ignore();
				std::cin >> intIn2;
				if (intIn2 > 100 || intIn2 < 1) cout << "Invalid entry. Entry must be 1 - 100" << endl;
				cout << endl;
			}

			while (intIn3 > 10000 || intIn3 < 1)
			{
				cout << "Enter an integer (1-10,000) for the number of turns to " << endl;
				cout << "run in the simulation:  ";
				std::cin.ignore();
				std::cin >> intIn3;
				if (intIn3 > 10000 || intIn3 < 1) cout << "Invalid entry. Entry must be 1 - 10,000" << endl;
				cout << endl;
			}
			cout << endl;
			runSimulation(intIn1, intIn2, intIn3);
			break;
		case 2:
			
			break;
		case 3:
			done = true;
			break;
		default:
			cout << "Not a valid choice" << std::endl;
			break;
		}
	}
	return 0;
}

void displayMenu() {
	cout << std::endl;
	cout << "What would you like to do?" << endl;
	cout << "*******************************" << endl;
	cout << "*    1) Run Buffer Test       *" << endl;
	cout << "*    2) Create a palindrome   *" << endl;
	cout << "*    3) Quit                  *" << endl;
	cout << "*******************************" << endl;
	cout << endl;
	cout << endl;
}

int getInput() {
	int choice;
	cout << "Choice: ";
	cin >> choice;
	return choice;
}

