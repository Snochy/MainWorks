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
#include <string>
#include <fstream>
#include "InOutExceptions.h"

using namespace std;

class Author
{
public:
	// Default Constructor
	// Purpose: Initializes name and address to a blank string
	// Parameters: none
	// Returns: none
	Author();

	// Parameterized Constructor
	// Purpose: Initializes the name and address
	// Parameters: n for the name and a for the address
	// Returns: none
	Author(string, string);

	// getName Function
	// Purpose: gets the name of the author
	// Parameters: None
	// Returns: string
	string getName();

	// getName Function
	// Purpose: gets the address of the author
	// Parameters: None
	// Returns: string
	string getAddress();

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

	//The name and address variables
private:
	string name;
	string address;
};

