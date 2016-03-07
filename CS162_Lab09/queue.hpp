/*********************************************************************
** Program Filename: queue.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-03-04
** Description: queue header file CS162_400 Lab 9
*********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

/*********************************************************************
** Function: generateValue
** Description: Returns a fandom integer from 1 to 100
** Parameters: none
** Pre-Conditions:	srand has been seeded
** Post-Conditions: none
*********************************************************************/
	int generateValue();


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
	int turn(int);


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
	void runSimulation(int intIn1, int intIn2, int intIn3);
#endif
