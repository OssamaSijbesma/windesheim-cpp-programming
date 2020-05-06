#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Node
{
	Node* next;
	T value;
};

template <typename T>
class LinkedStack
{
public:
	LinkedStack();
	~LinkedStack();
	T Peek();
	T Pop();
	void Push(T element);
	void Empty();
	void Traverse();
	int Size();
private:
	int size;
	Node<T>* top;
	void Print(Node<T>* node);
	void Delete(Node<T>* node);
};


