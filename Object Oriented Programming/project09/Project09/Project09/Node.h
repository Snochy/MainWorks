// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Project 09
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
#include <string>
#include "book.h"
using namespace std;

class Node
{
public:
	// Default Constructor
	// Purpose: Initializes the node and book set to null pointers
	// Parameters: none
	// Returns: none
	Node();

	// Parameterized Constructor
	// Purpose: Initializes the node with given values
	// Parameters: Book*
	// Returns: none
	Node(Book*);

	// Default Deconstructor
	// Purpose: Deletes dynamically allocated storage
	// Parameters: none
	// Returns: none
	~Node();

	// getNext Function
	// Purpose: Returns a pointer to the next node in list
	// Parameters: None
	// Returns: Node*
	Node* getNextNode();

	// getBook Function
	// Purpose: Returns total units ordered
	// Parameters: None
	// Returns: Book*
	Book* getBook();

	// setNext Function
	// Purpose: Sets the pointer to the given Node*
	// Parameters: Node*
	// Returns: none
	void setNextNode(Node*);

	// setBook Function
	// Purpose: Sets total units ordered
	// Parameters: Book*
	// Returns: none
	void setBook(Book*);


	//The next Node* in the list
	//Description and unit type
	//Total units ordering
private:
	Node* next;
	Book* book;
};

