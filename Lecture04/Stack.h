#pragma once
class Stack
{
public:
	Stack();
	~Stack();
	bool IsEmpty();
	void Push(int x);
	int Pop();
	void Print();
	int Size();
	int Sum();
private:
	int* size;
	int* data;
};

