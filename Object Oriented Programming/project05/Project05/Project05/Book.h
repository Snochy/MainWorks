// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 02
// Date Last Modified: 1/20/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once
#include "Author.h"
#include <fstream>
#include "InOutExceptions.h"

//Declares the size of the book list
const int SIZE = 3;

class Book
{
public:
	// Default Constructor
	// Purpose: Initializes the book page number, price and author set to zero or null
	// Parameters: none
	// Returns: none
	Book();

	// Parameterized Constructor
	// Purpose: Initializes the book page number, price and author set to given
	// Parameters: Author, Title, Page Number, Price
	// Returns: none
	Book(Author, string, int, double);

	// getAuthor Function
	// Purpose: gets the Author class
	// Parameters: None
	// Returns: Author
	Author getAuthor();

	// getName Function
	// Purpose: gets aTitle
	// Parameters: None
	// Returns: string
	string getTitle();

	// getPageNumber Function
	// Purpose: gets number of pages
	// Parameters: None
	// Returns: int
	int getPageNumber();

	// getPrice Function
	// Purpose: gets price
	// Parameters: None
	// Returns: double
	double getPrice();

	// writeData Function
	// Purpose: writes the book information into a file
	// Parameters: ofstream
	// Returns: none
	virtual void writeData(ofstream&);

	// readData Function
	// Purpose: read information from the file
	// Parameters: ifstream
	// Returns: none
	virtual void readData(ifstream&);

	//The page number and price variables
private:
	Author author;
	string aTitle;
	int pageNumber;
	double price;
};

// The Audio Book class
// It inherits from the Book class
class AudioBook : public Book
{
private:
	int lengthMins;

public:
	// Default Constructor
	// Purpose: Initializes the book page number, price and author set to zero or null
	// Parameters: none
	// Returns: none
	AudioBook();

	// Parameterized Constructor
	// Purpose: Initializes the book page number, price and author set to given
	// Parameters: Author, Title, Page Number, Price, Length in Minutes
	// Returns: none
	AudioBook(Author, string, int, double, int);

	// getLength Function
	// Purpose: gets length in minutes
	// Parameters: None
	// Returns: int
	int getLength();

	// writeData Function
	// Purpose: writes the book information into a file
	// Parameters: ofstream
	// Returns: none
	void writeData(ofstream&);

	// readData Function
	// Purpose: read information from the file
	// Parameters: ifstream
	// Returns: none
	void readData(ifstream&);
};

// The Digital Book class
// It inherits from the Book class
class DigitalBook : public Book
{
private:
	string format;

public:
	// Default Constructor
	// Purpose: Initializes the book page number, price and author set to zero or null
	// Parameters: none
	// Returns: none
	DigitalBook();

	// Parameterized Constructor
	// Purpose: Initializes the book page number, price and author set to given
	// Parameters: Author, Title, Page Number, Price, Format
	// Returns: none
	DigitalBook(Author, string, int, double, string);

	// getLength Function
	// Purpose: gets format of the Book
	// Parameters: None
	// Returns: string
	string getFormat();

	// writeData Function
	// Purpose: writes the book information into a file
	// Parameters: ofstream
	// Returns: none
	void writeData(ofstream&);

	// readData Function
	// Purpose: read information from the file
	// Parameters: ifstream
	// Returns: none
	void readData(ifstream&);
};

