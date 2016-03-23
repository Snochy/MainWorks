// Author: Zachary Thorpe
// Assignment: Lab 11
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 3/09/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 

#include "Money.h"


// Default Constructor
// Purpose: Initializes the money with dollars and cents equal to zero
// Parameters: none
// Returns: none
Money::Money()
{
	dollars = 0;
	cents = 0;
}

// Parameterized Constructor
// Purpose: Initializes the dollars and cents to given
// Parameters: d and c for dollars and cents
// Returns: none
Money::Money(int d, int c)
{
	dollars = d;
	cents = c;
}

// getDollars Function
// Purpose: gets the dollars amount
// Parameters: None
// Returns: Int
int Money::getDollars() const
{
	return dollars;
}

// getCents Function
// Purpose: gets the cents amount
// Parameters: None
// Returns: Int
int Money::getCents() const
{
	return cents;
}

// Overload + Function
// Purpose: Overload + function for adding money objects
// Parameters: None
// Returns: Money
Money Money::operator+(const Money& money) const
{
	int totalDollars = dollars + money.dollars;
	int totalCents = cents + money.cents;
	if (totalCents >= A_DOLLAR)
	{
		totalDollars = totalDollars + totalCents / A_DOLLAR;
		totalCents = totalCents % A_DOLLAR;
	}

	Money newMoney(totalDollars, totalCents);
	return newMoney;
		
}

// Overload + Function
// Purpose: Overload + function for adding money objects
// Parameters: None
// Returns: Money
Money Money::operator-(const Money& money) const
{
	int totalDollars = money.dollars - dollars;
	int totalCents = money.cents - cents;
	if (totalCents < 0)
	{
		totalDollars--;
		totalCents = A_DOLLAR + totalCents;
	}

	Money newMoney(totalDollars, totalCents);
	return newMoney;
}

// Overload << Function
// Purpose: Overload << function
// Parameters: None
// Returns: ostream
ostream& operator<<(ostream& out, const Money& m)
{
	out << m.getDollars() << " Dollar(s) and " << m.getCents() << " Cent(s).";

	return out;
}

