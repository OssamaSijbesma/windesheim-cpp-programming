#include <iostream>

using namespace std;

void ex1_pointerswap()
{
	// a:
	int* p;
	int* q;
	int* r;

	// b:
	p = new int;
	q = new int;

	// c:
	*p = 2;
	*q = 3;

	// d:
	cout << "*p: " << *p << ", and *q: " << *q << endl;

	// e:
	r = p;
	p = q;
	q = r;

	// f:
	cout << "*p: " << *p << ", and *q: " << *q << endl;

	// g:
	delete p;
	delete q;
	// don't delete r, it is already gone, possible runtime error
}

// make sure that 'p' is call by reference
// the address changes in the function and should change 
// in main() as well
void ex2_fill_array(int*& p, int n)
{
	int i;
	p = new int[n];
	for (i = 0; i < n; i++)
		p[i] = i + 1;
}

// This could be quite the puzzle to get all the indices
// correct. It could really help to draw the table on
// paper so you could keep track of the indices.
void ex3_pascals_triangle(int**& p, int n)
{
	int i, j;
	p = new int* [n];
	for (i = 0; i < n; i++)
	{
		p[i] = new int[i + 1];
		p[i][0] = 1;
		p[i][i] = 1;
		for (j = 1; j < i; j++)
			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
	}
}

int main()
{
	int i, j;
	int* pointer1;
	int** pointer2;
	int n = 13;

	ex1_pointerswap();

	ex2_fill_array(pointer1, n);
	for (i = 0; i < n - 1; i++)
		cout << pointer1[i] << ", ";
	cout << pointer1[n - 1] << endl;
	delete[] pointer1; // 'delete[]' lets you delete an array

	ex3_pascals_triangle(pointer2, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (pointer2[i][j] < 10)  // alignment
				cout << " ";
			if (pointer2[i][j] < 100) // alignment
				cout << " ";
			cout << pointer2[i][j] << " ";
		}
		cout << endl;
	}
}
