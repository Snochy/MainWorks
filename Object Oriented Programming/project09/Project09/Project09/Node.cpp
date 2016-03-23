// My Node Class
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

#include "Node.h"

// Default Constructor
// Purpose: Initializes the node and book set to null pointers
// Parameters: none
// Returns: none
Node::Node()
{
	next = nullptr;
	book = nullptr;
}

// Parameterized Constructor
// Purpose: Initializes the node with given values
// Parameters: Book*
// Returns: none
Node::Node(Book* b)
{
	book = b;
}

// Default Deconstructor
// Purpose: Deletes dynamically allocated storage
// Parameters: none
// Returns: none
Node::~Node()
{
	//Check if its been deleted
	if (next != nullptr)
	{
		// deletes any dynamically allocated pointers
		delete next;

		next = nullptr;
	}
	if (book != nullptr)
	{
		delete book;
		book = nullptr;
	}
}

// getNext Function
// Purpose: Returns a pointer to the next node in list
// Parameters: None
// Returns: Node*
Node* Node::getNextNode()
{
	return next;
}

// getBook Function
// Purpose: Returns total units ordered
// Parameters: None
// Returns: Book*
Book* Node::getBook()
{
	return book;
}

// setNext Function
// Purpose: Sets the pointer to the given Node*
// Parameters: Node*
// Returns: none
void Node::setNextNode(Node* n)
{
	next = n;
}

// setBook Function
// Purpose: Sets total units ordered
// Parameters: Book*
// Returns: none
void Node::setBook(Book* b)
{
	book = b;
}


