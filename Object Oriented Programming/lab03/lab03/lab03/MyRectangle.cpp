// Author: Zachary Thorpe
// Assignment: Lab 03
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/14/2016
// Purpose: Creates object of retangle class and displays height and width along with its area
// Description: Source code for lab 03

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#include "MyRectangle.h"


// Default Constructor
// Purpose: Initializes the rectangle width and height to zero
// Parameters: none
// Returns: none
MyRectangle::MyRectangle()
{
	width = 0;
	height = 0;
}

// Parameterized Constructor
// Purpose: Initializes the width and height to given
// Parameters: w and h for width and height
// Returns: none

MyRectangle::MyRectangle(int h, int w)
{
	width = w;
	height = h;
}

// getHeight Function
// Purpose: gets the height of the rectangle
// Parameters: None
// Returns: Int
int MyRectangle::getHeight()
{
	return height;
}

// getWidth Function
// Purpose: gets the width of the rectangle
// Parameters: None
// Returns: Int
int MyRectangle::getWidth()
{
	return width;
}

// getArea Function
// Purpose: gets the area of the rectangle
// Parameters: none
// Returns: int
int MyRectangle::getArea()
{
	return width * height;
}

