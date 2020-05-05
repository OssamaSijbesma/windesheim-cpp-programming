// Lecture05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Random.h"
#include "BST.h"

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

    BST bst;
    bst.Insert(2);
    bst.Insert(3);

    bst.Insert(1);
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(8);
    std::cout << bst.IsPresent(5) << std::endl;
    bst.Travers();
    bst.Print();
}
