// Lecture03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* ex2(int n) 
{
    int* p = new int[n];

    for (int i = 0; i < n; i++)
        p[i] = i+1;

    return p;
}

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int** ex3(int n) 
{
    int** pt = new int*[n];

    for (int i = 0; i < n; i++)
    {
        pt[i] = new int[i];
        for (int j = 0; j <= i; j++)
        {
            pt[i][j] = binomialCoeff(i, j);
        }
    }

    return pt;
}



int main()
{

    // Exercise 1

    int *p;
    int *q;
    int *r;

    p = new int(2);
    q = new int(3);

    std::cout << "p = " << *p << std::endl;
    std::cout << "q = " << *q << std::endl;

    r = new int(*p);
    *p = *q;
    *q = *r;

    std::cout << "p = " << *p << std::endl;
    std::cout << "q = " << *q << std::endl;

    delete p;
    delete q;
    delete r;

    // Exercise 2
    int* o = ex2(6);
    for (int i = 0; i < 6; i++)
        std::cout << o[i] << std::endl;

    // Exercise 3
    int** pascal = ex3(5);

    std::cout << "eeee " << pascal[4][2] << std::endl;

}