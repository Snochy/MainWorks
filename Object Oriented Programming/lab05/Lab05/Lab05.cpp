// Author: Zachary Thorpe
// Assignment: Lab 05
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 2/03/2016
// Purpose: Takes in user input checks if its a postive and finds the square root
// Description: Source code for lab 03

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

// Need to #include the header file assocoiated with this .cpp file
#include "lab05.h"

// main returns an integer and takes no parameters
int main()
{
	//Declare an interger for storing user input
	int userInputInt = 0;

	//Prompt the user to enter a positive, non-zero integer value.
	cout << "Etner a positive, non-zero value:";
	//Store value
	cin >> userInputInt;
	//Pass to function
	calculateSquare(userInputInt);

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}

// Calculate Square function
// Purpose: Square roots the int given
// Parameters: int i for input int
// Returns: double of the sqaure root
double calculateSquare(int)
{

	return 0;
}