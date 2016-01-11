// Author: Zachary Thorpe
// Assignment: Lab 01
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/4/2016
// Purpose: This program asked for the users name, then prints welcome using their input

// Description: Source code for lab 01
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
	//User input is stored in string objects
	string name = "";

	//Promt the user for their name
	cout << "Hello, my name is Zachary, what is your name?\n";

	// Use getline to store their input
	getline(cin, name);

	//Print out a welcome using their name that they input
	cout << "Welcome to C++ " << name << ", let the adventure begin." << endl;

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}