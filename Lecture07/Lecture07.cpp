// Lecture07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fraction.h"

int main()
{
    std::cout <<  Fraction(2, 3).Calculate() << endl;
    std::cout << Fraction(2, 3) << endl;
	std::cout << (Fraction(2, 3) + Fraction(1,6)) << endl;
	std::cout << (Fraction(2, 3) - Fraction(1,6)) << endl;
	std::cout << (Fraction(2, 3) * Fraction(1,6)) << endl;
	std::cout << (Fraction(2, 3) / Fraction(1,6)) << endl;
}
