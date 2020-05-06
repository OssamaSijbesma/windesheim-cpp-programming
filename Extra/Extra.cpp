// Extra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "stack.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Stack<int> stack;
    stack.PushBack(1);
    stack.PushBack(2);
    stack.PushBack(3);
    stack.PushBack(4);
    stack.PushBack(5);
    stack.PushBack(6);
    stack.PushBack(7);
    stack.PushBack(8);

    cout << stack.PopBack() << endl;
    stack.Traverse();

    Stack<char> stack2;
    stack2.PushBack('a');
    stack2.PushBack('b');
    stack2.PushBack('c');
    stack2.PushBack('d');
    stack2.PushBack('e');
    stack2.PushBack('f');
    stack2.PushBack('g');


    stack2.Traverse();
}
