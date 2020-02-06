// Lecture01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include "Database.h"

int main()
{
    Database data;
    Calculator calc;

    // Exercise 1
    std::cout << "Sum of 2 + 3 = " << calc.Sum(2,3) << std::endl;

    // Exercise 2
    calc.IsEven(3);

    // Exercise 3
    std::cout << "Total of the power off " << calc.Power(4, 6) << std::endl;

    // Exercise 4
    std::cout << calc.IsPrime(56) << std::endl;

    // Exercise 5
    std::cout << data.getArrayIndex(2) << std::endl;

    // Exercise 6
    int items[10] = { 0,4,6,3,4,2,6,7,8,7 };
    data.BubbleSort(items, 10);

    // Exercise 7
    std::cout << calc.GCD(21, 12) << std::endl;

    // Exercise 8
    std::cout << calc.LCM(3, 2) << std::endl;

    return 0;
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
