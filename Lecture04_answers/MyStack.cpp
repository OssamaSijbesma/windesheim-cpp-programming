#include "MyStack.h"
#include <iostream>

using namespace std;

MyStack::MyStack()
{
	top = nullptr;
}


MyStack::~MyStack()
{
	Block* pointer = top;
	while (top != nullptr)
	{
		top = top->next;
		delete pointer;
		pointer = top;
	}
}


bool MyStack::is_empty()
{
	return (top == nullptr);
}


void MyStack::print()
{
	Block* pointer = top;
	std::cout << "* * * The Stack * * *" << std::endl;
	while (pointer != nullptr)
	{
		cout << pointer->number << endl;
		pointer = pointer->next;
	}
}


void MyStack::push(int value)
{
	Block* pointer = new Block;
	pointer->number = value;
	pointer->next = top;
	top = pointer;
}


int MyStack::pop()
{
	if (is_empty())
		return 0;
	int result = top->number;
	Block* pointer = top;
	top = top->next;
	return result;
}


int MyStack::size()
{
	int size = 0;
	Block* pointer = top;
	while (pointer != nullptr)
	{
		size++;
		pointer = pointer->next;
	}
	return size;
}


int calculate_size(Block* pointer)
{
	if (pointer == nullptr)
		return 0;
	return 1 + calculate_size(pointer->next);
}


int MyStack::size_recursive()
{
	return (calculate_size(top));
}


int MyStack::sum()
{
	int sum = 0;
	Block* pointer = top;
	while (pointer != nullptr)
	{
		sum += pointer->number;
		pointer = pointer->next;
	}
	return sum;
}


int calculate_sum(Block* pointer)
{
	if (pointer == nullptr)
		return 0;
	return pointer->number + calculate_sum(pointer->next);
}


int MyStack::sum_recursive()
{
	return (calculate_sum(top));
}
