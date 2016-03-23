// My Book Class
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

#include "Book.h"

// Default Constructor
// Purpose: Initializes title and author to a blank strings and price to 0
// Parameters: none
// Returns: none
Book::Book()
{
	author = "";
	title = "";
	price = 0;
}

// Parameterized Constructor
// Purpose: Initializes title, author and price
// Parameters: title, author and price
// Returns: none

Book::Book(string t, string a, double p)
{
	title = t;
	author = a;
	price = p;
}

// getTitle Function
// Purpose: gets the name of the book
// Parameters: None
// Returns: string
string Book::getTitle()
{
	return title;
}

// getAuthor Function
// Purpose: gets the author name
// Parameters: None
// Returns: string
string Book::getAuthor()
{
	return author;
}

// getPrice Function
// Purpose: gets price
// Parameters: None
// Returns: double
double Book::getPrice()
{
	return price;
}