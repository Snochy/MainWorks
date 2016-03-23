// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Lab 03
// Date Last Modified: 1/14/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once
#include <iostream>
using namespace std;

const int A_DOLLAR = 100;

class Money
{
public:
	// Default Constructor
	// Purpose: Initializes the money with dollars and cents equal to zero
	// Parameters: none
	// Returns: none
	Money();

	// Parameterized Constructor
	// Purpose: Initializes the dollars and cents to given
	// Parameters: d and c for dollars and cents
	// Returns: none
	Money(int, int);

	// getDollars Function
	// Purpose: gets the dollars amount
	// Parameters: None
	// Returns: Int
	int getDollars() const;

	// getCents Function
	// Purpose: gets the cents amount
	// Parameters: None
	// Returns: Int
	int getCents() const;

	// Overload + Function
	// Purpose: Overload + function for adding money objects
	// Parameters: None
	// Returns: Money
	Money operator+(const Money&) const;

	// Overload - Function
	// Purpose: Overload + function for adding money objects
	// Parameters: None
	// Returns: Money
	Money operator-(const Money&) const;

	// Overload << Function
	// Purpose: Overload << function
	// Parameters: None
	// Returns: ostream
	friend ostream& operator<<(ostream&, const Money&);

	//The dollars and cents variables
private:
	int dollars;
	int cents;
};

