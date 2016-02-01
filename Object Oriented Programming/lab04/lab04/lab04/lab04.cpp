// Author: Zachary Thorpe
// Assignment: Lab 04
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/25/2016
// Purpose: Prints out the width and height of a retangle along with its area
// Description: Source code for lab 03

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

// Need to #include the header file assocoiated with this .cpp file
#include "lab04.h"

// main returns an integer and takes no parameters
int main()
{
	//Declare an array and a vector of double values
	double listOfDoubles[100] = {};

	//Declare stream object
	ifstream readMe;

	// open the file
	readMe.open("voltages.txt");

	//Test if file was opened
	if (readMe.fail())
	{
		cout << "\nFile not found\n";

		//Pause so the user can hit enter to close the program
		system("PAUSE");

		return 0;
	}

	//Variable for storing data and total entries
	double doubleData;
	int numOfEntries = 0;

	do // read until end of file is discoverd
	{
		readMe >> doubleData;

		// test the state of the stream
		// if it is okay, save the data and increment the total number of lines read
		if (readMe.good())
		{
			listOfDoubles[numOfEntries] = doubleData;
			numOfEntries++;
		}
		// if the read failed, see if it was because of end of file
		// if not, print a message and quit
		else if (!readMe.eof())
		{
			cout << "\nThere was a problem reading the file\n";

			//Pause so the user can hit enter to close the program
			system("PAUSE");
			return 0;
		}
	} while (!readMe.eof());

	// add the numbers and print the average
	double average = 0;
	for (unsigned int i = 0; i < numOfEntries; i++)
	{
		average += listOfDoubles[i];
	}

	average = average / numOfEntries;

	cout << "The average of the numbers found in the file was " << average << endl;

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}