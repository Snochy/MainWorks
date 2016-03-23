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
// Purpose: Initializes the list; set null pointers to first and last and list total to zero
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
	//Check if first been deleted
	if (first != nullptr)
	{
		// deletes any dynamically allocated array
		delete first;
		// Set its pointer to null
		first = nullptr;
	}

	//Check if last been deleted
	if (last != nullptr)
	{
		// deletes any dynamically allocated array
		delete last;
		// Set its pointer to null
		last = nullptr;
	}

}

// push_front Function
// Purpose: Adds a Node* to the start of list
// Parameters: Node*
// Returns: None
void List::push_front(Node* n)
{
	//Check if the list even has a first node, if so make the old first linked to the new first
	//else last is new node and first node
	if(getFirst() != nullptr)
		n->setNextNode(getFirst());
	else last = n;
	first = n;
}

// push_back Function
// Purpose: Adds an Node* to the back of list
// Parameters: Node*
// Returns: None
void List::push_back(Node* n)
{
	//Check if the list even has a last node, if so make the old last linked to the new last
	if(getLast() != nullptr)
		last->setNextNode(n);
	//Make n the new last
	last = n;
	//if the list doesnt have a first then N is also the first
	if (getFirst() == nullptr)
		first = last;
}

// push_back Function
// Purpose: Removes the first node from the list, and returns a pointer to this node
// Parameters: Node*
// Returns: None
Node* List::pop_front()
{
		//Save temp first
		Node* temp = first;

		//Check if first has a next node. If so first is now the next in line
		if (first->getNextNode() != nullptr)
			first = first->getNextNode();
		else
		{
			//else its the only member so clear first and last
			first = nullptr;
			last = nullptr;
		}

		//detact temp from list
		temp->setNextNode(nullptr);
		//Send temp back to main
		return temp;
}

// pop_back Function
// Purpose: Removes the last node from the list, and returns a pointer to this node
// Parameters: Node*
// Returns: None
Node* List::pop_back()
{
	// Make a temp first
	Node* current = first;
	
	//check if there is only 1 item in the linked list
	if (first != last)
	{
		//cycle through list unitil second to last
		while (current->getNextNode() != last)
			current = current->getNextNode();
		//new last is the one before last
		last = current;
		//current node* is swap with old last
		current = last->getNextNode();
		//detact last node from list
		last->setNextNode(nullptr);
	}
	else
	{
		//else clear first and last because its the only member in the linked list
		first = nullptr;
		last = nullptr;
	}
	//return old last node*
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
