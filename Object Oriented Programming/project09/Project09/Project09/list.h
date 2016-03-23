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
#include "Node.h"
using namespace std;

class List
{
public:
	// Default Constructor
	// Purpose: Initializes the list; set null pointers to first and last and list total to zero
	// Parameters: none
	// Returns: none
	List();

	// Parameterized Constructor
	// Purpose: Initializes the vector with given values
	// Parameters: Node* for first and last Node* and int for size
	// Returns: none
	List(Node*, Node*, int);

	// Default Deconstructor
	// Purpose: Deletes dynamically allocated storage
	// Parameters: none
	// Returns: none
	~List();

	// push_front Function
	// Purpose: Adds a Node* to the start of list
	// Parameters: Node*
	// Returns: None
	void push_front(Node*);

	// push_back Function
	// Purpose: Adds an Node* to the back of list
	// Parameters: Node*
	// Returns: None
	void push_back(Node*);

	// pop_front Function
	// Purpose: Removes the first node from the list, and returns a pointer to this node
	// Parameters: Node*
	// Returns: None
	Node* pop_front();

	// pop_back Function
	// Purpose: Removes the last node from the list, and returns a pointer to this node
	// Parameters: Node*
	// Returns: None
	Node* pop_back();

	// push_back Function
	// Purpose: Returns a pointer to the first node in the list
	// Parameters: Int
	// Returns: None
	Node* getFirst() const;

	// push_back Function
	// Purpose: Returns a pointer to the last node in the list
	// Parameters: Int
	// Returns: None
	Node* getLast() const;


	//The first and last node* of the list and total Nodes in list
private:
	Node* first;
	Node* last;
	int totalNode;
};
