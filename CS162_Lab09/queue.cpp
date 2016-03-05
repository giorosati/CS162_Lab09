/*********************************************************************
** Program Filename: queue.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-03-04
** Description: queue implementation file CS199_400 Lab 9
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include <queue>
#include "queue.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::queue;

//returns a random value of 1 to 100
int generateValue()
{
	return (rand() % (99) + 1);
}

// returns a random int 1-100 a specified % of the time
int turn(int percent)
{
		int x = generateValue();
		if (x <= percent) 
		{
			return x;
		}
		else return -1;
}

void runSimulation(int intIn1, int intIn2, int intIn3)
{
	cout << "**********************" << endl;
	cout << "Running the simulation now..." << endl;
	cout << endl;
	queue<int> myQueue;
	for (int i = 0; i < intIn3; i++)
	{
		int addValue = turn(intIn1);
		if (addValue != -1) myQueue.push(addValue);
		int removeValue = turn(intIn2);
		if (removeValue != -1)
		{
			if (myQueue.size() != 0) myQueue.pop();
		}
	}
	cout << "**********************" << endl;
	cout << "Simulation is complete." << endl;
	cout << endl;
	cout << "User chosen odds of ADDING an element in each turn: " << intIn1 << "%" << endl;
	cout << "User chosen odds of REMOVING an element in each turn: " << intIn2 << "%" << endl;
	cout << "User chosen turns to run: " << intIn3 << endl;
	cout << endl;
	cout << "Number of items in the queue at end: " << myQueue.size() << endl;
	cout << endl;
	myQueue.empty(); //remove all elements in the queue
	cout << "Press enter to continue." << endl;
}