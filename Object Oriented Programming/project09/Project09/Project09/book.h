// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 09
// Date Last Modified: 3/22/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once
#include <string>

using namespace std;

class Book
{
public:
	// Default Constructor
	// Purpose: Initializes title and author to a blank strings and price to 0
	// Parameters: none
	// Returns: none
	Book();

	// Parameterized Constructor
	// Purpose: Initializes title, author and price
	// Parameters: title, author and price
	// Returns: none
	Book(string, string, double);

	// getTitle Function
	// Purpose: gets the name of the book
	// Parameters: None
	// Returns: string
	string getTitle();

	// getAuthor Function
	// Purpose: gets the author name
	// Parameters: None
	// Returns: string
	string getAuthor();

	// getPrice Function
	// Purpose: gets the price of the book
	// Parameters: None
	// Returns: double
	double getPrice();

	//The name and address variables
private:
	string title;
	string author;
	double price;
};

