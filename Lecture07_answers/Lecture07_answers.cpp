// Lecture07_answers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction f1(3, 8), f2(4, 9), f3;
	cout << "* * *" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f3.multiply(f1, f2);
	cout << "* * *   f3.multiply(f1, f2)" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f3.add(f2);
	cout << "* * *   f3.add(f2)" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f3 = f2;
	cout << "* * *   f3 = f2" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f3 = f1 * f2;
	cout << "* * *   f3 = f1*f2" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f1 *= f3;
	cout << "* * *   f1 *= f3" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f1 = f2 + f3;
	cout << "* * *   f1 = f2 + f3" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;

	f3 += f1;
	cout << "* * *   f3 += f1" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
