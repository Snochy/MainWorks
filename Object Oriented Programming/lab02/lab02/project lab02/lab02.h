// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Lab 02
// Date Last Modified: 1/11/2016

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
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

//Declares the size of the lists
const int SIZE = 5;

/**
* Purpose: Adds all the numbers in the given array into a sum
* Parameters: double array
* Returns: double
* Pre-conditions: None
* Post-conditions: None
*/
double addNums(double[]);