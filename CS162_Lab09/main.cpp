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
	string stringIn = "";

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
				cin >> intIn1;
				if (!cin)
				{
					cout << "Invalid entry. Entry must be 1 - 100" << endl;
					intIn1 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
				else if (intIn1 > 100 || intIn1 < 1)
				{
					cout << "Invalid entry. Entry must be 1 - 100" << endl;
					intIn1 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
				cout << endl;
			}
			while (intIn2 > 100 || intIn2 < 1)
			{
				cout << "Enter an integer (1-100) that will be the percentage chance" << endl;
				cout << "that an item is REMOVED from the queue: ";
				cin >> intIn2;
				if (!cin)
				{
					cout << "Invalid entry. Entry must be 1 - 100" << endl;
					intIn2 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
				else if (intIn2 > 100 || intIn2 < 1)
				{
					cout << "Invalid entry. Entry must be 1 - 100" << endl;
					intIn1 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
					cout << endl;
			}
			while (intIn3 > 10000 || intIn3 < 1)
			{
				cout << "Enter an integer (1-10,000) for the number of turns to " << endl;
				cout << "run in the simulation:  ";
				cin >> intIn3;
				if (!cin)
				{
					cout << "Invalid entry. Entry must be 1 - 10,000" << endl;
					intIn3 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
				else if (intIn3 > 10000 || intIn3 < 1)
				{
					cout << "Invalid entry. Entry must be 1 - 10,000" << endl;
					intIn3 = 0;
					cin.clear();
					cin.ignore(100, '\n');
				}
					cout << endl;
			}
			cout << endl;
			runSimulation(intIn1, intIn2, intIn3);
			break;
		case 2:
			while (stringIn.length() < 2)
			{
				cout << "Please enter a string of characters (at least two!): " << endl;
				cout << "Your string will end as of its first whitespace character." << endl;
				cout << "Enter your string: ";
				cin >> stringIn;
				cin.ignore(100, '\n');
				if (stringIn.length() < 2)
				{
					stringIn = "";
					cout << "Try again. Please enter at least two characters." << endl;
					cout << endl;
				}
			}
			cout << endl;
			createPalindrome(stringIn);
			cout << endl;
			stringIn = "";
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
	cout << endl;
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

