#include "Database.h"
#include <iostream>

Database::Database()
{
}

Database::~Database()
{
}

int Database::getArrayIndex(int value)
{
	int i = 0;
	for (int item : items)
	{
		i++;
		if (item == value)
			return i;
	}
	return -1;
}

void Database::BubbleSort(int* numbers, int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		// Last i elements are already in place  
		for (j = 0; j < size - i - 1; j++)
			if (numbers[j] > numbers[j + 1])
				swap(&numbers[j], &numbers[j + 1]);
}

void Database::swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}