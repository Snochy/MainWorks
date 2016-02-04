// Implementation file for the exception class
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

#include "SRException.h"

ZeroException::ZeroException(int i)
{
	zeroNum = i;
}

string ZeroException::getMessage() const
{
	return zeroNum + "was an invaild number, must be non-zero number.";
}

NegativeException::NegativeException(int i)
{
	negNum = i;
}

string NegativeException::getMessage() const
{
	return negNum + "was an invaild number, must be non-negative.";
}

