// Extra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "stack.h"
#include "LinkedStack.h"

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

    LinkedStack<char> stack2;
    stack2.Push('a');
    stack2.Push('b');
    stack2.Push('c');
    stack2.Push('d');
    stack2.Push('e');
    stack2.Push('f');
    stack2.Push('g');

    cout << stack2.Pop() << endl;
    stack2.Traverse();

    stack2.Empty();
    stack2.Push('h');
    stack2.Push('i');
    stack2.Push('j');
    stack2.Traverse();

}
