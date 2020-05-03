// Lecture01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include "Database.h"

using namespace std;

int main()
{
    Database data;
    Calculator calc;

    // Exercise 1
    cout << "Sum of 2 + 3 = " << calc.Sum(2,3) << endl;

    // Exercise 2
    cout << (calc.IsEven(3) ? "3 is even" : "3 is uneven") << endl;
    cout << (calc.IsEven(6) ? "6 is even" : "6 is uneven") << endl;

    // Exercise 3
    cout << "Total of the power of " << calc.Power(4, 6) << endl;

    // Exercise 4
    cout << (calc.IsPrime(56) ? "56 is a prime" : "56 is not a prime") << endl;
    cout << (calc.IsPrime(23) ? "23 is a prime" : "23 is not a prime") << endl;

    // Exercise 5
    cout << data.getArrayIndex(2) << endl;

    // Exercise 6
    int items[10] = { 0,4,6,3,4,2,6,7,8,7 };
    data.BubbleSort(items, 10);

    // Exercise 7
    cout << "The greatest common divisor of 21 and 12 is: " << calc.GCD(21, 12) << endl;

    // Exercise 8
    cout << "The least common multiple of 3 and 2 is: " << calc.LCM(3, 2) << endl;

    return 0;
}
