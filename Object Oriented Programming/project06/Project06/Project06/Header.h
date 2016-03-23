// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 06
// Date Last Modified: 3/09/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#pragma once

// #include any required header files
// strings and iostream are required
#include <iostream>
#include <string>

using namespace std;

// index_of function
// Purpose: Returns the index of where the second string appears in the first
// Parameters: const string, const string
// Returns: int
int index_of(const string&, const string&);

// checker function
// Purpose: Recursive function that returns the index of the strings location or -1 if not found
// Parameters: const string, const string, int
// Returns: int
int checker(const string&, const string&, int);