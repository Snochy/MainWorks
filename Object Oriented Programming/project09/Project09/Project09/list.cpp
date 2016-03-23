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

#include "list.h"

// Default Constructor
// Purpose: Initializes the list sents null pointers and list to zero
// Parameters: none
// Returns: none
List::List()
{
	first = nullptr;
	last = nullptr;
	totalNode = 0;
}

// Parameterized Constructor
// Purpose: Initializes the vector with given values
// Parameters: Node* for first and last Node* and int for size
// Returns: none
List::List(Node* f, Node* l, int n)
{
	first = f;
	last = l;
	totalNode = n;
}

// Default Deconstructor
// Purpose: Deletes dynamically allocated storage
// Parameters: none
// Returns: none
List::~List()
{
	//Check if its been deleted
	if (first != nullptr)
	{
		// deletes any dynamically allocated array
		delete first;
		// Set its pointer to null
		first = nullptr;
	}

	//Check if its been deleted
	if (last != nullptr)
	{
		// deletes any dynamically allocated array
		delete last;
		// Set its pointer to null
		last = nullptr;
	}

}

// push_front Function
// Purpose: Adds an Node* to the start of list
// Parameters: Node*
// Returns: None
void List::push_front(Node* n)
{
	if(getFirst() != nullptr)
		n->setNextNode(getFirst());
	first = n;
}

// push_back Function
// Purpose: Adds an Node* to the back of list
// Parameters: Node*
// Returns: None
void List::push_back(Node* n)
{
	if (first != NULL)
	{
		Node* current = first;
		while (current->getNextNode() != nullptr)
		{
			current = current->getNextNode();
		}
		current->setNextNode(n);
	}
	last = n;
}

// push_back Function
// Purpose: Removes the first node from the list, and returns a pointer to this node
// Parameters: Node*
// Returns: None
Node* List::pop_front()
{
		Node* temp = first;
		first = first->getNextNode();
		temp->setNextNode(nullptr);
		return temp;
}

// pop_back Function
// Purpose: Removes the last node from the list, and returns a pointer to this node
// Parameters: Node*
// Returns: None
Node* List::pop_back()
{
	Node* current = first;
	if (first->getNextNode() != nullptr)
	{
		while (current->getNextNode() != last)
			current = current->getNextNode();
		last = current;
		current = last->getNextNode();
		last->setNextNode(nullptr);
	}
	else
	{
		return first;
	}
	return current;
}

// push_back Function
// Purpose: Returns a pointer to the first node in the list
// Parameters: Int
// Returns: None
Node* List::getFirst() const
{
	return first;
}

// push_back Function
// Purpose: Returns a pointer to the last node in the list
// Parameters: Int
// Returns: None
Node* List::getLast() const
{
	return last;
}
