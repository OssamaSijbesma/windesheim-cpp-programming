#pragma once

struct Block
{
	double number;
	Block* next;
};

class Stack
{
private:
	Block* top;
public:
	Stack();
	~Stack();
	bool is_empty();
	void print();
	void push(double value);
	double pop();
	int size();
	int size_recursive();
	double sum();
	double sum_recursive();
};

