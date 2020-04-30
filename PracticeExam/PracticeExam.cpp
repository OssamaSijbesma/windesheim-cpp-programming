// PracticeExam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
#include "Fraction.h"

using namespace std;

// Change this for your own system
const char basePath[] = "C:\\Users\\Mars\\Documents\\";

int FileSum(const char* fileName) 
{
    // concat the base path with the file name
    string path(basePath);
    path.append(fileName);

    ifstream inputFile;
    ofstream outputFile;
    string content("");
    char curChar;
    int sum = 0;

    // Read the file
    inputFile.open(path);
    if (inputFile.is_open())
    {
        while (!inputFile.eof())
        {
            curChar = inputFile.get();
            cout << curChar;

            if (isdigit(curChar))
                sum += curChar % 48;
            else
                content += curChar;
        }
        inputFile.close();
    }
    else
        cout << "unable to open file " << path << endl;

    // Write the file
    outputFile.open(path+".stripped");
    if (outputFile.is_open())
    {
        outputFile << content;
        outputFile.close();
    }
    else
        cout << "unable to open file " << path+".stripped" << endl;    
    
    // Write the file
    outputFile.open(path, std::ofstream::out | std::ofstream::app);
    if (outputFile.is_open())
    {
        outputFile << sum;
        outputFile.close();
    }
    else
        cout << "unable to open file " << path+".stripped" << endl;
}

void append(char* body, char* tail) 
{
    const int size = strlen(body) + strlen(tail) + 1;
    strcat_s(body, size, tail);
}

int main()
{
    std::cout << "Ex1\n";
    BinarySearchTree<int>* bst = new BinarySearchTree<int>();
    bst->Insert(8);
    bst->Insert(7);
    bst->Insert(4);
    bst->Insert(2);
    bst->Insert(10);
    bst->Traverse();
    bst->Remove(4);
    bst->Traverse();

    std::cout << "\nEx2\n";
    Fraction f1(1, 4);
    std::cout << f1 << std::endl;

    Fraction f2(1, 4);
    Fraction f3(2, 4);
    Fraction f4 = f2 * f3;
    std::cout << f3 << std::endl;

    f1 *= f2;
    std::cout << f1 << std::endl;

    std::cout << "\nEx3\n";
    FileSum("aaa.txt");

    std::cout << "\nEx4\n";
    char body[16] = "test";
    char tail[] = "ing...";
    append(body, tail);
    std::cout << body << std::endl;

}
