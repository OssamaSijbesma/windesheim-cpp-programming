#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
	top = nullptr;
}

Stack::~Stack()
{
	Block* pointer = top;
	while (top != nullptr)
	{
		top = top->next;
		delete pointer;
		pointer = top;
	}
}


bool Stack::is_empty()
{
	return (top == nullptr);
}


void Stack::print()
{
	Block* pointer = top;
	std::cout << "* * * The Stack * * *" << std::endl;
	while (pointer != nullptr)
	{
		cout << pointer->number << endl;
		pointer = pointer->next;
	}
}


void Stack::push(double value)
{
	Block* pointer = new Block;
	pointer->number = value;
	pointer->next = top;
	top = pointer;
}


double Stack::pop()
{
	if (is_empty())
		return 0;
	int result = top->number;
	Block* pointer = top;
	top = top->next;
	return result;
}


int Stack::size()
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


int Stack::size_recursive()
{
	return (calculate_size(top));
}


double Stack::sum()
{
	double sum = 0;
	Block* pointer = top;
	while (pointer != nullptr)
	{
		sum += pointer->number;
		pointer = pointer->next;
	}
	return sum;
}


double calculate_sum(Block* pointer)
{
	if (pointer == nullptr)
		return 0;
	return pointer->number + calculate_sum(pointer->next);
}


double Stack::sum_recursive()
{
	return (calculate_sum(top));
}
