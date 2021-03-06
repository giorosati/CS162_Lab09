/*********************************************************************
** Program Filename: stack.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-03-04
** Description: stack implementation file CS199_400 Lab 9
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <queue>
#include <deque>
#include "stack.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::deque;


//create a stack of char
deque<char> myStack;


/*********************************************************************
** Function: createPalindrome
** Description: Takes a string of at least 2 characters as a parameter
** and creates and outputs to the console the palindrome.
** Parameters: a string of at least two characters
** Pre-Conditions:	none
** Post-Conditions: none
*********************************************************************/
void createPalindrome(string stringIn)
{
	
	//put the initial string characters in the stack
	for (int i = 0; i < stringIn.length(); i++)
	{
		myStack.push_front(stringIn.at(i));
	}

	//now add the characters in reverse order
	for (int i = stringIn.length(); i > 0 ; i--)
	{
		myStack.push_front(stringIn.at(i-1));
	}
	
	//make a new string from the stack
	string newString = "";
	for (int i = 0; i < myStack.size(); i++)
	{
		newString += myStack.at(i);
	}

	cout << endl;
	cout << "You entered: " << stringIn << endl;
	cout << "Your palindrome is: " << newString;
	cout << endl;
	myStack.clear();

}