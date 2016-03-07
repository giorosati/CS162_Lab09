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



/*********************************************************************
** Function: generateValue
** Description: Returns a fandom integer from 1 to 100
** Parameters: none
** Pre-Conditions:	srand has been seeded
** Post-Conditions: none
*********************************************************************/
int generateValue()
{
	return (rand() % (99) + 1);
}



/*********************************************************************
** Function: turn
** Description: Uses the generateValue function to create a random number
** from 1 to 100. It then compares this number to the percent paramenter
** it receives. If the number generated is less than or equal to the percent
** parameter the generated number is returned. If the generated number is
** larger than the percent parameter then -1 is returned.
** Parameters: percent, which is an int from 1 to 100
** Pre-Conditions:	none
** Post-Conditions: none
*********************************************************************/
int turn(int percent)
{
		int x = generateValue();
		if (x <= percent) 
		{
			return x;
		}
		else return -1;
}


/*********************************************************************
** Function: runSimulation
** Description: Simulates a buffer.
** Parameters:
** intIn1: a user specified int of 1-100 for the percentage
** chance that a value will be added to the list.
** intIn2: a user specified int of 1-100 for the percengate
** change that a value will be removed from the list.
** intIn3: a user specified int of 1-10,000 for the number of "turns"
** to run the simulation.
** Pre-Conditions:	none
** Post-Conditions: outputs the results of the simulation showing
** the number of rounds run, the user entered percentages, and the
** number of items in the list.
*********************************************************************/
void runSimulation(int intIn1, int intIn2, int intIn3)
{
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
	cout << "Simulation rounds are complete." << endl;
	cout << endl;
	cout << "User chosen odds of ADDING an element in each round: " << intIn1 << "%" << endl;
	cout << "User chosen odds of REMOVING an element in each round: " << intIn2 << "%" << endl;
	cout << "User chosen rounds to run: " << intIn3 << endl;
	cout << endl;
	cout << "Number of items in the queue at end: " << myQueue.size() << endl;
	cout << endl;
	myQueue = queue<int>();

}