// Author: Zachary Thorpe
// Assignment: Lab 02
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/11/2016
// Purpose: Takes in a list of doubles and returns the sum of the numbers
// Description: Source code for lab 02

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

// Need to #include the header file assocoiated with this .cpp file
#include "lab02.h"

// main returns an integer and takes no parameters
int main()
{
	//The variable for storing the double temp and the sum of the numbers
	double input = 0;
	double sum = 0;

	//declares the vector list for input from user and the array list for adding
	vector<double> numList;
	double addList[SIZE] = { 0 };

	//Promt the user for their numbers
	cout << "Please enter 5 numbers to be added together\n";

	//Loop for storing the doubles
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Please enter the " << i + 1<< " number: ";
		//while loop for detecting input
		while (!(cin >> input))
		{
			cin.clear();
			cin.ignore(numeric_limits < streamsize >::max(), '\n');
			cout << "\nInvalid input, please enter a number: ";
		}

		//clear the newline from buffer
		cin.ignore(10, '\n');
		//save input from user
		numList.push_back(input);
	}

	//move the vectors into the array
	for (int i = 0; i < SIZE; i++)
		addList[i] = numList[i];

	sum = addNums(addList);

	//output the results
	cout << "\nThe sum of the numbers is " << fixed << setprecision(2) << sum << endl;

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}

/**
* Purpose: Adds all the numbers in the given array into a sum
* Parameters: double array
* Returns: double
* Pre-conditions: None
* Post-conditions: None
*/
double addNums(double list[]) 
{
	// decalre temp sum for this function
	double tempSum = 0;
	//Loop to added them together
	for (int i = 0; i < SIZE; i++)
		tempSum += list[i];

	// return the results
	return tempSum;
};