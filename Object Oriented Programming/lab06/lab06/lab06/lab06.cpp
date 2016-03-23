// Author: Zachary Thorpe
// Assignment: Lab 06
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 2/10/2016
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
#include "lab06.h"

// main returns an integer and takes no parameters
int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";

	// call the reverser function
	reverser(myString);

	// output the result
	cout << myString << endl;

	system("PAUSE");
	return 0;
}

// Reverser String function
// Purpose: Reverse the string given
// Parameters: char array
// Returns: none
void reverser(char string[])
{
	//staring points for the pointers
	char *frontPtr = &string[0];
	char *endPtr = &string[0];

	//decalre variable for size of the array of chars
	int sizeOfArray = 0;

	//Find the end of the char
	while (*endPtr != '\0') 
	{
		//increment the pointer and the size number
				*endPtr++;
				sizeOfArray++;
	}

	//If endPtr is a null terminator then decrement
	if (*endPtr == '\0')
		*endPtr--;

	//For loop for repeating process
	//Only do it until the halfway point
	for (int i = sizeOfArray / DIVIDEBYTWO; i > 0; i--)
	{
		//Store the front in temp
		char temp = *frontPtr;
		//Put end to front
		*frontPtr = *endPtr;
		//temp front to back
		*endPtr = temp;
		//Increment front decrement end
		*frontPtr++;
		*endPtr--;
	}


}