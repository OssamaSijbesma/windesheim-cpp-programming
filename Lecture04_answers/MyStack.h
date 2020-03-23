#pragma once

struct Block
{
	int number;
	Block* next;

};
class MyStack
{
private:
	Block* top;

public:
	MyStack();
	~MyStack();

	bool is_empty();
	void print();
	void push(int value);
	int pop();
	int size();
	int size_recursive();
	int sum();
	int sum_recursive();
};

