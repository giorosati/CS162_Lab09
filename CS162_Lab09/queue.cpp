/*********************************************************************
** Program Filename: queue.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-03-04
** Description: queue implementation file CS199_400 Lab 9
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "queue.hpp"

using std::cout;
using std::cin;
using std::endl;

//returns a random value of 1 to 100
int genValue()
{
	return (rand() % (99) + 1);
}


//gets a percentage (an int from 1 to 100) from the user
//that determines the odds of an item being addded to the
//queue.
//int getPercentAdd()			
//{
//	cout << "Enter an integer from 1 - 100 that will be the" << endl;
//	cout << "percentage chance of an item being added to the queue." << endl;
//	cout << "Enter integer: ";
//	cin >> ;
//
//}
								
								
//void getPercentRemove(int);		//gets a percentage (an int from 1 to 100) from the user
//								//that determintes the odds of a item being removed from
//								//the queue.


int turn(int percent)
{
		int x = genValue();
		
		if (x <= percent)	//return x if 
		{
			return x;
		}
		else return -1;
}