// Extra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "stack.h"
#include "LinkedStack.h"
#include "IO.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Stack<int> stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);
    stack.Push(8);

    cout << stack.Pop() << endl;
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

    IO::WriteTextFile("ding.txt");
    IO::ReadTextFile("ding.txt");

    Person* persons = new Person[4];
    persons[0].name = "Jaap";
    persons[0].age = 15;
    persons[1].name = "Hans";
    persons[1].age = 14;
    persons[2].name = "Jorn";
    persons[2].age = 23;
    persons[3].name = "Walter";
    persons[3].age = 43;

    IO::WriteBinaryFile("Personen.dat", persons, 4);
    IO::ReadBinaryFile("Personen.dat");

}
