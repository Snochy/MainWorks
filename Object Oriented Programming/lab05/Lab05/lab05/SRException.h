// Header file for the exception class
// Define our own exception of what can be square rooted
// The constructor initializes the message string
// The what( ) function returns the message string
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

// Exception class for a zero input
class ZeroException
{
private:
	int zeroNum;
public:
	// Constructor
	// Purpose: store the bad number
	// Parameters: The number used
	// Returns: none
	ZeroException(int);

	// getTheIndex function
	// Purpose: returns the invalid number
	// Parameters: none
	// Returns: zeroNum + message
	string getMessage() const;
};

// exception class for an negative non-zero
class NegativeException
{
private:
	int negNum;
public:
	// constructor 
	// Purpose: store the bad number
	// Parameters: The number used
	// Returns: none
	NegativeException(int);

	// getMessage function
	// Purpose: return the message
	// Parameters: none
	// Returns: the message + the negative number
	string getMessage() const;
};
