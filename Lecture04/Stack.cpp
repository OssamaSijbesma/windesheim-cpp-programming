#include "Stack.h"
#include <iostream>

Stack::Stack()
{
	this->size = new int();
	this->data = new int[64];
}

Stack::~Stack()
{
	delete size;
	delete[] data;
}

bool Stack::IsEmpty()
{
	return (*size == 0) ? true : false; 
}

void Stack::Push(int x)
{
	data[*size] = x;
	*size += 1;
}

int Stack::Pop()
{
	*size -= 1;
	return data[*size];
}

void Stack::Print()
{
	for (int i = 0; i < *size; i++)
		std::cout << data[i] << std::endl;
}

int Stack::Size()
{
	return *size;
}

int Stack::Sum()
{
	int sum = 0;

	for (int i = 0; i < *size; i++)
		sum += data[i];

	return sum;
}
