// Author: Zachary Thorpe
// Assignment: Lab 10
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 3/09/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 
#pragma once

template<class T>
class Pair
{
public:
	// Default Constructor
	// Purpose: Initializes the pair
	// Parameters: none
	// Returns: none
	Pair();

	// Parameterized Constructor
	// Purpose: Initializes the pair
	// Parameters: Two data members
	// Returns: none
	Pair(const T& firstV, const T& secondV);

	// clear Function
	// Purpose: Returns first value
	// Parameters: None
	// Returns: T
	T getFirst();

	// clear Function
	// Purpose: Returns second value
	// Parameters: None
	// Returns: T
	T getSecond();

	//First and second datamembers
private:
	T first, second;
};


// Default Constructor
// Purpose: Initializes the pair
// Parameters: none
// Returns: none
template <class T>
Pair<T>::Pair()
{
	first = null;
	second = null;
}

// Parameterized Constructor
// Purpose: Initializes the pair
// Parameters: Two data members
// Returns: none
template <class T>
Pair<T>::Pair(const T& firstV, const T& secondV)
{
	first = firstV;
	second = secondV;
}

// clear Function
// Purpose: Returns first value
// Parameters: None
// Returns: T
template <class T>
T Pair<T>::getFirst()
{
	return first;
}

// clear Function
// Purpose: Returns second value
// Parameters: None
// Returns: T
template <class T>
T Pair<T>::getSecond()
{
	return second;
}

