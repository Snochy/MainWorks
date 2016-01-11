// Author: Zachary Thorpe
// Assignment: Project 01
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 1/9/2016
// Purpose: Has the user inputs their tax information and the program tells them there tax number.

// Description: Source code for Project 01
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

// Need to #include the header file assocoiated with this .cpp file
#include "Header.h"

// main returns an integer and takes no parameters
int main()
{
	//Used for division of doubles
	const double HUNDRED = 100;

	//Tax limits
	const double SINGLEAHIGH = 863;
	const double SINGLEBLOW	= 864;
	const double SINGLEBHIGH = 2588;
	const double SINGLECLOW = 2589;
	const double SINGLECHIGH = 4313;
	const double SINGLEDLOW = 4314;

	const double JOINTAHIGH = 1726;
	const double JOINTBLOW = 1727;
	const double JOINTBHIGH = 5176;
	const double JOINTCLOW = 5177;
	const double JOINTCHIGH = 8626;
	const double JOINTDLOW = 8627;

	//Tax percent
	const double TIER1TAX = 0.022;
	const double TIER2TAX = 0.033;
	const double TIER3TAX = 0.062;
	const double TIER4TAX = 0.075;

	//Amount added
	const double SINGTIER2ADD = 25;
	const double SINGTIER3ADD = 85;
	const double SINGTIER4ADD = 181;
	const double JOINTTIER2ADD = 40;
	const double JOINTTIER3ADD = 175;
	const double JOINTTIER4ADD = 390;

	//User input is stored in string objects
	double taxableIncome = 0;
	string fileStatus = "";
	double tax = 0;
	string again = "";

	//Do once then request if they want to repeat
	do
	{
		//Promt the user for their taxable income
		cout << "Enter in your taxable income\n";
		//Store input from console
		cin >> taxableIncome;

		//check if it fail to store
		while (cin.fail() || taxableIncome < 1)
		{
			//Prompt them that the input failed
			cout << "You must enter a number and its value must be higher then zero.\n";
			//Clear cin
			cin.clear();
			//Ingore the whole line
			cin.ignore(numeric_limits < streamsize >::max(), '\n');
			//Store input from console
			cin >> taxableIncome;
			//check if it is above zero
		}
		//Promt the type in their filing type
		cout << "\nType 's' for single or 'm' for jointly.\n";

		//Store input from console
		cin >> fileStatus;

		//check if it was a 's' or a 'm'
		while (fileStatus != "s" && fileStatus != "m")
		{
			//Prompt them that the input failed
			cout << "You must enter a 's' or 'm'\n";
			//Clear cin
			cin.clear();
			//Ingore the whole line
			cin.ignore(numeric_limits < streamsize >::max(), '\n');
			//Store input from console
			cin >> fileStatus;
		}
		//Clear cin
		cin.clear();
		//Ingore the whole line
		cin.ignore(numeric_limits < streamsize >::max(), '\n');
		//Check if Single or Jointly then run formulas for tax based on taxable income
		if (fileStatus == "s")
		{
			if (taxableIncome > 0 && taxableIncome <= SINGLEAHIGH)
				tax = ((taxableIncome - 0) * TIER1TAX) + 0;
			else if (taxableIncome >= SINGLEBLOW && taxableIncome <= SINGLEBHIGH)
				tax = ((taxableIncome - SINGLEBLOW - 1) * TIER2TAX) + SINGTIER2ADD;
			else if (taxableIncome >= SINGLECLOW && taxableIncome <= SINGLECHIGH)
				tax = ((taxableIncome - SINGLECLOW - 1) * TIER3TAX) + SINGTIER3ADD;
			else if (taxableIncome >= SINGLEDLOW)
				tax = ((taxableIncome - SINGLEDLOW) * TIER4TAX) + SINGTIER4ADD;
		}
		else
		{
			if (taxableIncome > 0 && taxableIncome <= JOINTAHIGH)
				tax = ((taxableIncome - 0) * TIER1TAX) + 0;
			else if (taxableIncome >= JOINTBLOW && taxableIncome <= JOINTBHIGH)
				tax = ((taxableIncome - JOINTBLOW - 1) * TIER2TAX) + JOINTTIER2ADD;
			else if (taxableIncome >= JOINTCLOW && taxableIncome <= JOINTCHIGH)
				tax = ((taxableIncome - JOINTCLOW - 1) * TIER3TAX) + JOINTTIER3ADD;
			else if (taxableIncome >= JOINTDLOW)
				tax = ((taxableIncome - JOINTDLOW) * TIER4TAX) + JOINTTIER4ADD;
		}

		//determine the feedback to the user based on file type
		string fileTypeString = "";
		if (fileStatus == "m")
			fileTypeString = "joint";
		else if (fileStatus == "s")
			fileTypeString = "single";

		//round off taxes
		tax = roundf(tax * HUNDRED) / HUNDRED;

		//Output their tax
		cout << "\nYour taxable income is $" << taxableIncome << endl;
		cout << "Filing as a " << fileTypeString << " return." << endl;

		cout << "Your tax is  $" <<  tax << endl;
		//Ask if they want to repeat program
		cout << "\nWant to do another tax calculation? (y or n)" ;

		//store their input
		cin >> again;

		//Check if input is valid
		while (again != "y" && again != "n")
		{
			//Prompt them that the input failed
			cout << "You must enter a 'y' or 'n'\n";
			//Clear cin
			cin.clear();
			//Ingore the whole line
			cin.ignore(numeric_limits < streamsize >::max(), '\n');
			//Store input from console
			cin >> again;
		}

		//repeat if it was yes
	} while (again == "y");

	//Pause so the user can hit enter to close the program
	system("PAUSE");

	//Return zero to send back to the OS
	return 0;
}