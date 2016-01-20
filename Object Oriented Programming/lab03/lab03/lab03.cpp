// Author: Zachary Thorpe
// Assignment: Lab 03
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/14/2016
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
#include "lab03.h"

// main returns an integer and takes no parameters
int main()
{
	cout << "The height of the rectangle is " << rectangle.getHeight() << " and the width is " << rectangle.getWidth();
	cout << "\nThe area is " << rectangle.getArea() << endl;

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}