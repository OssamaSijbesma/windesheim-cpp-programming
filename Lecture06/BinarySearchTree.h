#pragma once

int random_number();
int* permutation(int n);

template <typename T>
struct Node
{
	T info;
	Node* left;
	Node* right;
};

template <typename T>
class BinarySearchTree
{
private:
	Node<T>* root;
public:
	BinarySearchTree();
	~BinarySearchTree();
	void insert(T x);
	void traverse();
	bool is_present(T x);
	void print();
	int depth();
};


