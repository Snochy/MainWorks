// Author: Zachary Thorpe
// Assignment: Lab 03
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/20/2016
// Purpose: Creates object of book class and displays author, page number and price
// Description: Source code for Project 02

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#include "Book.h"


// Default Constructor
// Purpose: Initializes the rectangle width and height to zero
// Parameters: none
// Returns: none
Book::Book()
{
	author;
	aTitle = "";
	pageNumber = 0;
	price = 0;
}

// Parameterized Constructor
// Purpose: Initializes the width and height to given
// Parameters: w and h for width and height
// Returns: none

Book::Book(Author a, string t, int pN, double p)
{
	author = a;
	aTitle = t;
	pageNumber = pN;
	price = p;
}

// getAuthor Function
// Purpose: gets the Author class
// Parameters: None
// Returns: Author
Author Book::getAuthor()
{
	return author;
}

// getName Function
// Purpose: gets aTitle
// Parameters: None
// Returns: string
string Book::getTitle()
{
	return aTitle;
}

// getPageNumber Function
// Purpose: gets number of pages
// Parameters: None
// Returns: int
int Book::getPageNumber()
{
	return pageNumber;
}

// getPrice Function
// Purpose: gets price
// Parameters: None
// Returns: double
double Book::getPrice()
{
	return price;
}

