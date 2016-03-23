// Header file for the exception class
// Define our own exception of errors occur while opening files
// The constructor initializes the message string
// ---------------------------------------------------

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

// Exception class for a end of file
class EndOfFile
{
public:
	// Constructor
	// Purpose: error when the file is over
	// Parameters: none
	// Returns: none
	EndOfFile();
};

// exception class for read error
class Read_Error
{
public:
	// constructor 
	// Purpose: when file has error while reading file
	// Parameters: none
	// Returns: none
	Read_Error();
};

// exception class for open error
class Open_Error
{
public:
	// constructor 
	// Purpose: error when file can not open
	// Parameters: none
	// Returns: none
	Open_Error();
};
