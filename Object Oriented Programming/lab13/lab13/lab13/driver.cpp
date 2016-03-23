// Author: Zachary Thorpe
// Assignment: Lab 13
// Instructor: L. R. Thackeray
// Class: CNS 1410 Section: 003
// Date Written: 3/22/2016

// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------- 


#include <iostream>
#include "pair.h"
using namespace std;


int main()
{
	Pair<char> letters('a', 'd');
	cout << "\nThe first letter is: " << letters.getFirst();
	cout << "\nThe second letter is: " << letters.getSecond();

	cout << endl;
	system("Pause");
	return 0;
}