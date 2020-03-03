// Lecture05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Random.h"

int main()
{
    Random random;
    std::cout << "1: " << random.Rand() << std::endl;
    std::cout << "2: " << random.Rand() << std::endl;
    std::cout << "3: " << random.Rand() << std::endl;
    std::cout << "4: " << random.Rand() << std::endl;
    std::cout << "5: " << random.Rand() << std::endl;
    std::cout << "6: " << random.Rand() << std::endl;
    std::cout << "7: " << random.Rand() << std::endl;
    std::cout << "8: " << random.Rand() << std::endl;
    std::cout << "9: " << random.Rand() << std::endl;

    std::cout << "1: " << random.Rand(100) << std::endl;
    std::cout << "2: " << random.Rand(100) << std::endl;
    std::cout << "3: " << random.Rand(100) << std::endl;
    std::cout << "4: " << random.Rand(100) << std::endl;
    std::cout << "5: " << random.Rand(100) << std::endl;
    std::cout << "6: " << random.Rand(100) << std::endl;
    std::cout << "7: " << random.Rand(100) << std::endl;
    std::cout << "8: " << random.Rand(100) << std::endl;
    std::cout << "9: " << random.Rand(100) << std::endl;

    int* o = random.GeneratePermutation(8);

    for (int i = 0; i < 8; i++)
        std::cout << o[i] << " ";

    std::cout << std::endl;

    
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
