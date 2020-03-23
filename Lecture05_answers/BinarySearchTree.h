#pragma once

int random_number();
int* permutation(int n);

struct Node
{
	int info;
	Node* left;
	Node* right;
};

class BinarySearchTree
{
private:
	Node* root;
public:
	BinarySearchTree();
	~BinarySearchTree();
	void insert(int x);
	void traverse();
	bool is_present(int x);
	void print();
	int depth();
};

