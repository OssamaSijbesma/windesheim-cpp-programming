#include "Stack.h"
#include <iostream>

Stack::Stack()
{
	this->size = new int();
	this->data = new int[64];
}

Stack::~Stack()
{
	delete[] data;
}

bool Stack::IsEmpty()
{
	return (size == 0) ? true : false; 
}

void Stack::Push(int x)
{
	data[*size] = x;
	size++;
}

int Stack::Pop()
{
	size--;
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
	return 0;
}
