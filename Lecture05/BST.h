#pragma once
#include <iostream>


class BST
{
	struct Node
	{
		int value;
		Node* left;
		Node* right;

		Node(int value);
		void Insert(int value);
		int Depth();
		void PrintInfix();
	};

public:
	BST();
	~BST();
	void Insert(int value);
	int Depth();
	bool IsPresent(int x);
	void Travers();
	void Print();
private:
	Node* root;
	void PrintPrefix(Node* node, int depth);
};
