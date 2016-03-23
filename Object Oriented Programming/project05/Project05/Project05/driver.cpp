// CS 1410 Programming Project #2
// Copyright 2014, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Implementation file for main
// =======================================
#include "Header.h"

int main()
{
	// Display Menu 
	int option = 0;
	const int CREATE = 1;
	const int READ = 2;

	cout << "\nCS 1410 Project 5";
	cout << "\nSelect one of the following two options: ";
	cout << "\n   1 - create a test file";
	cout << "\n   2 - read the test file and display the results";
	cout << "\n>> ";

	// run the selected option
	cin >> option;
	if (option == CREATE)
	{
		createTestFile();
		cout << "\nTest file has been created.";
	}
	else if (option == READ)
	{
		readTestFile();
	}
	else
	{
		cout << "\nInvalid option.";
	}

	system("PAUSE");
	return 0;
}

void displayBooks(const vector<Book*>& books)
{
	// set up cout to display currency
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// display heading
	cout << "\nRecommended Reading List\n";

	// you provide the rest of this code

	//Make list to transfer vector into
	Book* bookList[SIZE];
	//move the vectors into the array
	for (int i = 0; i < SIZE; i++)
		bookList[i] = books[i];
	
	//For loop for displaying all the books info into console
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n"
			<< bookList[i]->getTitle() << "\n"
			<< bookList[i]->getAuthor().getName() << "\n"
			<< bookList[i]->getAuthor().getAddress() << "\n"
			<< bookList[i]->getPageNumber() << " pages\n";

		//Check if its a audiobook pointer
		AudioBook* abptr = dynamic_cast<AudioBook*>(bookList[i]);
		if (abptr)
			cout << "The length of this audio book is " << abptr->getLength() << " minutes." << endl;

		//Check if its a digitalbook pointer
		DigitalBook* dbptr = dynamic_cast<DigitalBook*>(bookList[i]);
		if (dbptr)
			cout << "The format of this digital book is " << dbptr->getFormat() << endl;

		cout << "$" << bookList[i] -> getPrice() << "\n";
	}


}

void createTestFile()
{
	// create a vector for storing the account objects
	vector<Book*> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");


	// add the books to the vector
	// create eveything on the heap because we need to work with Book*
	myBooks.push_back(new AudioBook(p1, "Harry Potter and the Sorcerer's Stone", 256, 24.95, 415));
	myBooks.push_back(new DigitalBook(p2, "Mockingjay", 400, 12.99, "PDF"));
	myBooks.push_back(new Book(p3, "The Hobbit", 322, 14.29));

	// write the books to a file
	// the file will be in the same folder as the executable file
	// assume that the file opens
	ofstream outputFile;
	outputFile.open("bookData.txt");

	for (unsigned i = 0; i < myBooks.size(); ++i)
	{
		// Use RTTI to get the type of object being pointed to, cast returns null if cast fails
		// see if it is an audiobook and if it is, output "AUDIOBOOK" to the file to mark the output
		AudioBook* bp = dynamic_cast<AudioBook*>(myBooks[i]);
		if (bp)
		{
			outputFile << "AUDIOBOOK" << endl;
		}
		else
		{
			// see if it is a digital book, if it is output "DIGITALBOOK" to the file
			DigitalBook* bp = dynamic_cast<DigitalBook*>(myBooks[i]);
			if (bp)
			{
				outputFile << "DIGITALBOOK" << endl;
			}
			else // It is not one of the child classes, so it must be a base class (BOOK) object
			{
				outputFile << "BOOK" << endl;
			}
		}
		// now have the book object write itself to the file
		myBooks[i]->writeData(outputFile);
	}
}

void readTestFile()
{
	// create a vector for storing the account objects
	vector<Book*> myBooks;

	//Declare stream object
	ifstream readMe;

	//Try block for exceptions for opening file
	try
	{
		openFile(readMe, "bookData.txt");

		//Try block for reading the file
		try
		{
			//Check if the next line is end of the file
			while (readMe.peek() != EOF)
			{
				//Check book type
				string line;
				getline(readMe, line);
				if (line == "BOOK")
				{
					//Create a Book object.
					Book* tempBook = new Book();
					//Call the Book object's readData( ) function.
					tempBook -> readData(readMe);
					//If the read operations work okay, push the Book object you created into the vector.
					myBooks.push_back(tempBook);
				}
				else if (line == "AUDIOBOOK")
				{
					//Create a Book object.
					AudioBook* tempBook = new AudioBook();
					//Call the AudioBook object's readData( ) function.
					tempBook -> readData(readMe);
					//If the read operations work okay, push the Book object you created into the vector.
					myBooks.push_back(tempBook);
				}
				else if (line == "DIGITALBOOK")
				{
					//Create a Book object.
					DigitalBook* tempBook = new DigitalBook();
					//Call the DigitalBook object's readData( ) function.
					tempBook -> readData(readMe);
					//If the read operations work okay, push the Book object you created into the vector.
					myBooks.push_back(tempBook);
				}
			}

			//After reading all of the data, call the displayBooks( ) function to display the contents of the vector.
			displayBooks(myBooks);
		}
		//If the error code in the exception object is for a read error, 
		// display an error message and return to main, and let the program terminate.
		catch (invalid_argument e)
		{
			cout << "Wrong data type read form file." << endl;
		}
		catch (EndOfFile e)
		{
			cout << "Reached the end of the file before all needed data was read." << endl;
		}
		catch (Read_Error e)
		{
			cout << "Unable to read line in file" << endl;
		}
		catch (...)
		{
			cout << "Unknown error.";
		}
	}
	//If the open operations do not work, catch the exception. 
	catch (Open_Error e)
	{
		cout << "Error, could not open the file, program terminating." << endl;
	}
	catch (...)
	{
		cout << "Unknown error.";
	}

}

void openFile(ifstream& in, const string& _name)
{
	// open the file
	in.open(_name);
	//Test if file was opened
	if (in.fail())
	{
		//Throw error is it was not able
		throw Open_Error();
	}
}