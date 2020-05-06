#pragma once
#include <iostream>
#include <string>

using namespace std;

const int DEFAULT_SIZE = 5;

template <typename T>
class Stack
{
public:
	Stack();
	~Stack();
	T Back();
	T PopBack();
	void PushBack(T element);
	void Empty();
	void Traverse();
	int Size();
private:
	int max;
	int size;
	T* elements;
	void Resize();
};

