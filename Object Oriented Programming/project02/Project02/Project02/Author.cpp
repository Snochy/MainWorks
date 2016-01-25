// Author: Zachary Thorpe
// Assignment: Lab 03
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/20/2016
// Purpose: Creates object of Author class and displays author name and address
// Description: Source code for Project 02

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#include "Author.h"

// Default Constructor
// Purpose: Initializes the author's name and address as zero
// Parameters: none
// Returns: none
Author::Author()
{
	name = "";
	address = "";
}

// Parameterized Constructor
// Purpose: Initializes the author's name and address to the given
// Parameters: n and a for name and address
// Returns: none

Author::Author(string n, string a)
{
	name = n;
	address = a;
}

// getName Function
// Purpose: gets the name of author
// Parameters: None
// Returns: string
string Author::getName()
{
	return name;
}

// getAddress Function
// Purpose: gets the address of author
// Parameters: None
// Returns: string
string Author::getAddress()
{
	return address;
}


