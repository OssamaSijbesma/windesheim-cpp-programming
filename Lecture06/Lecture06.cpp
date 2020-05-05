// Lecture06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Stack.h"
#include "BinarySearchTree.h"

using namespace std;

void Print(int n) 
{
    cout << n << endl;
}

int main()
{
    // Ex 1
    Stack stack;
    stack.push(2.3);
    stack.push(3.4);
    stack.push(2.2);
    stack.print();

    // Ex 2
    vector<int> v(10);
    fill(v.begin(), v.end(), 14);
    for_each(v.begin(), v.end(), Print);

    // Ex 3
    int i;
    BinarySearchTree<int> tree;
    int* pointer = permutation(20);

    for (i = 0; i < 20; i++)
        cout << pointer[i] << endl;

    for (i = 0; i < 20; i++)
        tree.insert(random_number());

    tree.traverse();
    if (tree.is_present(306))
        cout << "306 is present" << endl;
    else
        cout << "306 is NOT present" << endl;
}