// Lecture04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyClass.h"
#include "Stack.h"

int main()
{
    MyClass myclass(3, 2);
    myclass.print();
    myclass.setX(4);
    myclass.print();
    myclass.setP(5);
    myclass.print();
    myclass.~MyClass();

    Stack stack;
    stack.Push(3);
    stack.Push(2);
    stack.Print();
    std::cout << stack.Sum() << std::endl;
}
