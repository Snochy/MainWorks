// My Vector Class
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 07
// Date Last Modified: 3/22/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#include "MyVector.h"

// Default Constructor
// Purpose: Initializes the vector with a default capacity of 2
// Parameters: none
// Returns: none
MyVector::MyVector()
{
	//Its size will be zero and its capacity will be two.
	capacityV = CAPTWO;
	sizeV = 0;
	// creates a vector that is empty.
	array = new int[capacityV];
}

// Parameterized Constructor
// Purpose: Initializes the vector with given capacity
// Parameters: Int for capacity
// Returns: none
MyVector::MyVector(int i)
{
	//Its size will be input and its capacity will be two.
	capacityV = i;
	sizeV = 0;
	// creates a vector that is empty.
	array = new int[capacityV];
}


// Default Deconstructor
// Purpose: Deletes dynamically allocated storage
// Parameters: none
// Returns: none
MyVector::~MyVector()
{
	//Check if its been deleted
	if (array != nullptr)
	{
		// deletes any dynamically allocated array
		delete[] array;
		// Set its pointer to null
		array = nullptr;
	}
}

// Overloaded assignment operator
// Purpose: to do assignment from one vector to another
// Parameters: a MyVector object
// Returns: A MyVector object
MyVector& MyVector::operator=(const MyVector& vec)
{
	// Check if reference self
	if (this == &vec)
		return *this;

	// clean up this array
	delete[] this->array;

	//Transfer size and cap
	sizeV = vec.sizeV;
	capacityV = vec.capacityV;
	// create a new array big enough to hold right hand object's data
	this->array = new int[sizeV];

	// copy the data
	for (int i = 0; i < sizeV; i++)
	{
		this->array[i] = vec.array[i];
	}

	// return this object
	return *this;
}

// Copy constructor
// Purpose: Copy the data into this vector
// Parameters: a MyVector object
// Returns: none
MyVector::MyVector(const MyVector& vec)
{
	sizeV = vec.sizeV;
	capacityV = vec.capacityV;
	array = new int[sizeV];
	for (int i = 0; i < sizeV; i++)
	{
		this->array[i] = vec.array[i];
	}
}

// push_back Function
// Purpose: Adds an interger to the end of the vector
// Parameters: Int
// Returns: None
void MyVector::push_back(int input)
{
	//Check if vector pointer is empty
	if (array == nullptr)
		//Create array for the pointer if so
		array = new int[capacityV];

	//Check if current array is full
	if (sizeV == capacityV)
	{
		//Double capacity
		capacityV *= 2;
		//Make new array and pointer
		int* newArray = nullptr;
		newArray = new int[capacityV];
		//Transfer data over
		for (int i = 0; i < sizeV; i++)
			newArray[i] = array[i];
		//Switch pointers
		array = newArray;
	}
	//Add input into slot
	array[sizeV] = input;
	//Increment size
	sizeV++;
}

// at Function
// Purpose: Returns the value stored in the given interger
// Parameters: Int
// Returns: Int
// Pre-Condtions: Parameter can not be higher then the actually size of the array or it throws an exception
int MyVector::at(int input) const
{
	//Check if input is out of bounds
	if (input >= sizeV)
		//Throw which index input
		throw input;
	//return results if in bounds
	else return array[input];
}

// size Function
// Purpose: gets the size of the vector
// Parameters: None
// Returns: Int
int MyVector::size()
{
	return sizeV;
}

// capacity Function
// Purpose: gets the capacity
// Parameters: None
// Returns: Int
int MyVector::capacity()
{
	return capacityV;
}

// clear Function
// Purpose: clears the vector and resets size to 0 and capacity to 2
// Parameters: None
// Returns: None
void MyVector::clear()
{
	//Check if its been deleted
	if (array != nullptr)
	{
		// deletes any dynamically allocated array
		delete[] array;
		// Set its pointer to null
		array = nullptr;
	}
	sizeV = 0;
	capacityV = CAPTWO;
}

// Overload << Function
// Purpose: Overload << function
// Parameters: None
// Returns: ostream
ostream& operator<<(ostream& out, const MyVector& vec)
{
	//Print out all members of the vector
	for (int i = 0; i < vec.sizeV; i++)
	{
		out << vec.at(i) << " ";
	}
	//return ostream
	return out;
}


