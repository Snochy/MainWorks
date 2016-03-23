// The header file contains class definitions and function declarations
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

#pragma once
#include <iostream>
using namespace std;

template <class T>
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

	// Overloaded assignment operator
	// Purpose: to do assignment from one vector to another
	// Parameters: a MyVector object
	// Returns: A MyVector object
	MyVector<T>& operator=(const MyVector<T>&);

	// Overload << Function
	// Purpose: Overload << function
	// Parameters: None
	// Returns: ostream
	template<typename T>
	friend ostream& operator<<(ostream&, const MyVector<T>&);

	// Copy constructor
	// Purpose: Copy the data into this vector
	// Parameters: a MyVector object
	// Returns: none
	MyVector(const MyVector<T>&);

	// push_back Function
	// Purpose: Adds an T to the end of the vector
	// Parameters: T
	// Returns: None
	void push_back(T);

	// at Function
	// Purpose: Returns the value stored in the given position
	// Parameters: int
	// Returns: T
	// Pre-Condtions: Parameter can not be higher then the actually size of the array or it throws an exception
	T at(int) const;

	// size Function
	// Purpose: gets the size of the vector
	// Parameters: None
	// Returns: int
	int size();

	// capacity Function
	// Purpose: gets the capacity
	// Parameters: None
	// Returns: int
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
	T* array = nullptr;
	const int CAPTWO = 2;
};

//
//
//
//
//CLASS 
//
//
//
//

// Default Constructor
// Purpose: Initializes the vector with a default capacity of 2
// Parameters: none
// Returns: none
template <class T>
MyVector<T>::MyVector()
{
	//Its size will be zero and its capacity will be two.
	capacityV = CAPTWO;
	sizeV = 0;
	// creates a vector that is empty.
	array = new T[capacityV];
}

// Parameterized Constructor
// Purpose: Initializes the vector with given capacity
// Parameters: Int for capacity
// Returns: none
template <class T>
MyVector<T>::MyVector(int i)
{
	//Its size will be input and its capacity will be two.
	capacityV = i;
	sizeV = 0;
	// creates a vector that is empty.
	array = new T[capacityV];
}


// Default Deconstructor
// Purpose: Deletes dynamically allocated storage
// Parameters: none
// Returns: none
template <class T>
MyVector<T>::~MyVector()
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

// Copy constructor
// Purpose: Copy the data into this vector
// Parameters: a MyVector object
// Returns: none
template <class T>
MyVector<T>::MyVector(const MyVector<T>& vec)
{
	sizeV = vec.sizeV;
	capacityV = vec.capacityV;
	array = new T[sizeV];
	for (int i = 0; i < sizeV; i++)
	{
		this->array[i] = vec.array[i];
	}
}

// push_back Function
// Purpose: Adds an interger to the end of the vector
// Parameters: T
// Returns: None
template <class T>
void MyVector<T>::push_back(T input)
{
	//Check if vector pointer is empty
	if (array == nullptr)
		//Create array for the pointer if so
		array = new T[capacityV];

	//Check if current array is full
	if (sizeV == capacityV)
	{
		//Double capacity
		capacityV *= 2;
		//Make new array and pointer
		T* newArray = nullptr;
		newArray = new T[capacityV];
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
// Returns: T
// Pre-Condtions: Parameter can not be higher then the actually size of the array or it throws an exception
template <class T>
T MyVector<T>::at(int input) const
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
template <class T>
int MyVector<T>::size()
{
	return sizeV;
}

// capacity Function
// Purpose: gets the capacity
// Parameters: None
// Returns: Int
template <class T>
int MyVector<T>::capacity()
{
	return capacityV;
}

// clear Function
// Purpose: clears the vector and resets size to 0 and capacity to 2
// Parameters: None
// Returns: None
template <class T>
void MyVector<T>::clear()
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
template<typename T>
ostream& operator<<(ostream& out, const MyVector<T>& vec)
{
	//Print out all members of the vector
	for (int i = 0; i < vec.sizeV; i++)
	{
		out << vec.at(i) << " ";
	}
	//return ostream
	return out;
}

// Overloaded assignment operator
// Purpose: to do assignment from one vector to another
// Parameters: a MyVector object
// Returns: A MyVector object
template<class T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& vec)
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
	this->array = new T[sizeV];

	// copy the data
	for (int i = 0; i < sizeV; i++)
	{
		this->array[i] = vec.array[i];
	}

	// return this object
	return *this;
}
