// Author: Zachary Thorpe
// Assignment: Lab 10
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 3/09/2016

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
	cout << "This program will find the ocurence of one string inside another." << endl << "Enter the string to be searched: ";

	// Varible for storing user input and results
	string string1 = "";
	string string2 = "";
	int result = 0;

	// Store value in input
	getline(cin, string1);

	//Promt user to type in a string
	cout << endl << "Now enter the string you want to search for: ";

	// Store value in input
	getline(cin, string2);

	//check the index of string 
	result = index_of(string1, string2);

	//if invalid
	if(result == -1)
		cout << "'" << string2 << "' not found in first string " << endl;
	//else print results
	else cout << "The index of substring is = " << result << endl;

	system("PAUSE");
	return 0;
}

// index_of function
// Purpose: Returns the index of where the second string appears in the first
// Parameters: const string, const string
// Returns: int
int index_of(const string& stringA, const string& stringB)
{
	return checker(stringA, stringB, 0);
}

// checker function
// Purpose: Recursive function that returns the index of the strings location or -1 if not found
// Parameters: const string, const string, int
// Returns: int
int checker(const string& stringA, const string& stringB, int count)
{
	//Check if it got to the end of the string without a match
	if (stringA == "")
		return -1;

	//check if it found a match
	if (stringA.substr(0) == stringB)
		return count;
	//Else move counter up 1 and check the string minus the first character
	else
	{
		count++;
		return checker(stringA.substr(1), stringB, count);
	}

}