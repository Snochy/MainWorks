// The header file contains class definitions and function declarations
// Author: Zachary Thorpe
// Course: CS 1410 
// Project: Lab 14
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
using namespace std;

class Node
{
public:
	// Default Constructor
	// Purpose: Initializes the list sents null pointers and list to zero
	// Parameters: none
	// Returns: none
	Node();

	// Parameterized Constructor
	// Purpose: Initializes the vector with given values
	// Parameters: Next Node*, description, unit type and amount
	// Returns: none
	Node(Node*, string, string, int);

	// getNext Function
	// Purpose: Returns a pointer to the next node in list
	// Parameters: None
	// Returns: Node*
	Node* getNext();

	// getDescription Function
	// Purpose: Returns the type of node
	// Parameters: none
	// Returns: string
	string getDescription();

	// getUnitType Function
	// Purpose: Returns the unit type
	// Parameters: none
	// Returns: string
	string getUnitType();

	// getTotalUnits Function
	// Purpose: Returns total units ordered
	// Parameters: None
	// Returns: int
	int getTotalUnits();

	// setNext Function
	// Purpose: Sets the pointer to the given Node*
	// Parameters: Node*
	// Returns: none
	void setNext(Node*);

	// setDescription Function
	// Purpose: Sets the type of node
	// Parameters: string
	// Returns: none
	void setDescription(string);

	// setUnitType Function
	// Purpose: Sets the unit type
	// Parameters: string
	// Returns: none
	void setUnitType(string);

	// setTotalUnits Function
	// Purpose: Sets total units ordered
	// Parameters: int
	// Returns: none
	void setTotalUnits(int);


	//The next Node* in the list
	//Description and unit type
	//Total units ordering
private:
	Node* next;
	string description, unitType;
	int totalUnits;
};

#pragma once
#include <iostream>
using namespace std;

class List
{
public:
	// Default Constructor
	// Purpose: Initializes the list sents null pointers and list to zero
	// Parameters: none
	// Returns: none
	List();

	// Parameterized Constructor
	// Purpose: Initializes the vector with given values
	// Parameters: Node* for first and last Node* and int for size
	// Returns: none
	List(Node*, Node*, int);

	// push_back Function
	// Purpose: Adds an Node* to the end of list
	// Parameters: Node*
	// Returns: None
	void push_back(Node*);

	// push_front Function
	// Purpose: Adds an Node* to the start of list
	// Parameters: Node*
	// Returns: None
	void push_front(Node*);

	// push_back Function
	// Purpose: Removes the last node from the list, and returns a pointer to this node
	// Parameters: Node*
	// Returns: None
	Node* pop_back();

	// push_back Function
	// Purpose: Removes the first node from the list, and returns a pointer to this node
	// Parameters: Node*
	// Returns: None
	Node* pop_front();

	// push_back Function
	// Purpose: Returns a pointer to the first node in the list
	// Parameters: Int
	// Returns: None
	Node* getFirst();

	// push_back Function
	// Purpose: Returns a pointer to the last node in the list
	// Parameters: Int
	// Returns: None
	Node* getLast();


	//The first and last node* of the list and total Nodes in list
private:
	Node* first, last;
	int totalNode;
};

