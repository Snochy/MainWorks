// Author: Zachary Thorpe
// Assignment: Lab 11
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
#include "Money.h"

// main returns an integer and takes no parameters
int main()
{
	// Varible for storing user input
	int d1 = 0;
	int d2 = 0;
	int c1 = 0;
	int c2 = 0;

	//Promt user to type in an int
	cout << "Please type in the first dollar amount: ";

	// Store value in input
	cin >> d1;

	//Promt user to type in a int
	cout << "Please type in the first cent amount: ";

	// Store value in input
	cin >> c1;

	// Create money object
	Money money1 = Money(d1, c1);

	//Promt user to type in an int
	cout << "Please type in the second dollar amount: ";

	// Store value in input
	cin >> d2;

	//Promt user to type in an int
	cout << "Please type in the second cent amount: ";

	// Store value in input
	cin >> c2;

	// Create money object
	Money money2 = Money(d2, c2);

	// Display results to user
	cout << endl << "The two moneies added together: " << (money2 + money1) << endl;
	cout << "The two moneies subtracted: " << (money2 - money1) << endl;

	system("PAUSE");
	return 0;
}