// Copyright 2015, Utah Valley University
//Author: Roger deBry
// Date last modified: January 20, 2016 by Zachary Thorpe
// Driver code, Programming Project #2
// =======================================

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 
#include "driver.h"

int main()
{

	// create a vector for storing the account objects
	vector<Book> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");

	// Create three Book objects
	Book b1(p1, "Harry Potter and the Sorcerer's Stone", 256, 24.95);
	Book b2(p2, "Mockingjay", 400, 12.99);
	Book b3(p3, "The Hobbit", 322, 14.29);

	// add the books to the vector
	myBooks.push_back(b1);
	myBooks.push_back(b2);
	myBooks.push_back(b3);

	// call the displayBooks function to display the books
	displayBooks(myBooks);
	cout << "\n\n";

	system("PAUSE");
	return 0;
}

/**
* Purpose: Displays all the information of the books in the given list
* Parameters: const vector book reference
* Returns: none
* Pre-conditions: The list provided is not null
* Post-conditions: None
*/
void displayBooks(const vector<Book>& books)
{
	//Make list to transfer vector into
	Book bookList[SIZE];
	//move the vectors into the array
	for (int i = 0; i < SIZE; i++)
		bookList[i] = books[i];

	//For loop for displaying all the books info into console
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n"
			<< bookList[i].getTitle() << "\n"
			<< bookList[i].getAuthor().getName() << "\n"
			<< bookList[i].getAuthor().getAddress() << "\n"
			<< bookList[i].getPageNumber() << " pages\n"
			<< "$" << bookList[i].getPrice() << "\n";
	}
}