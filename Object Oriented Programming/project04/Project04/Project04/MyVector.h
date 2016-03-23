// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 04
// Date Last Modified: 2/21/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once
class MyVector
{
public:
	// Default Constructor
	// Purpose: Initializes the vector with a default capacity of 2
	// Parameters: none
	// Returns: none
	MyVector();

	// Parameterized Constructor
	// Purpose: Initializes the vector with given capacity
	// Parameters: Int for capacity
	// Returns: none
	MyVector(int);


	// Default Deconstructor
	// Purpose: Deletes dynamically allocated storage
	// Parameters: none
	// Returns: none
	~MyVector();

	// push_back Function
	// Purpose: Adds an interger to the end of the vector
	// Parameters: Int
	// Returns: None
	void push_back(int);

	// at Function
	// Purpose: Returns the value stored in the given interger
	// Parameters: Int
	// Returns: Int
	// Pre-Condtions: Parameter can not be higher then the actually size of the array or it throws an exception
	int at(int);

	// size Function
	// Purpose: gets the size of the vector
	// Parameters: None
	// Returns: Int
	int size();

	// capacity Function
	// Purpose: gets the capacity
	// Parameters: None
	// Returns: Int
	int capacity();

	// clear Function
	// Purpose: clears the vector and resets size to 0 and capacity to 2
	// Parameters: None
	// Returns: None
	void clear();

	//The size and capacity of the vector, and null pointer
private:
	int sizeV;
	int capacityV;
	int* array = nullptr;
	const int CAPTWO = 2;
};

