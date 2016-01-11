// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Lab 03
// Date Last Modified: 1/14/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once
class MyRectangle
{
public:
	// Default Constructor
	// Purpose: Initializes the rectangle width and height to zero
	// Parameters: none
	// Returns: none
	MyRectangle();

	// Parameterized Constructor
	// Purpose: Initializes the width and height to given
	// Parameters: w and h for width and height
	// Returns: none
	MyRectangle(int, int);

	// getHeight Function
	// Purpose: gets the height of the rectangle
	// Parameters: None
	// Returns: Int
	int getHeight();

	// getWidth Function
	// Purpose: gets the width of the rectangle
	// Parameters: None
	// Returns: Int
	int getWidth();

	// getArea Function
	// Purpose: gets the area of the rectangle
	// Parameters: none
	// Returns: int
	int getArea();

	//The width and height variables
private:
	int width;
	int height;
};

