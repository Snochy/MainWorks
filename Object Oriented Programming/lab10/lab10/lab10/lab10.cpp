// Author: Zachary Thorpe
// Assignment: Lab 10
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 3/08/2016
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
#include "Header.h"

// main returns an integer and takes no parameters
int main()
{
	//Promt user to type in a string
	cout << "Please enter a string you wish to have the a's counted." << endl;

	// Varible for storing user input
	string input = "";

	// Store value in input
	getline(cin, input);

	// Call the method and display the number
	cout << "The number of a's in the string is: " << counter(input) << endl;

	system("PAUSE");
	return 0;
}

// Counter function
// Purpose: counter the number of 'a' in given string
// Parameters: const string
// Returns: int
int counter(const string& string)
{
	// start/make the count 0
	int count = 0;
	// check if the string is been read all the way through if so return number of count
	if (string == "")
		return count;
	// else check if the first letter of the string is an A or a
	else
	{
		//If so increse count by 1
		if(string.at(0) == 'a' || string.at(0) == 'A')
			count++;
		// The recurse the string into the method
		return count + counter(string.substr(1));
	}
}