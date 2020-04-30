#pragma once
#include <iostream>

template <typename T>
struct Node {
	T info;
	Node* left;
	Node* right;
	Node(T x) {
		this->info = x;
		this->left = nullptr;
		this->right = nullptr;
	}
};

template <typename T>
class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();
	void Insert(T x);
	void Traverse();
	void Remove(T x);
private:
	Node<T>* root;
	void DeconstructTree(Node<T>* node);
	void Insert(Node<T>* node, T x);
	void Traverse(Node<T>* node);
	Node<T>* Find(Node<T>* node, T x);
	Node<T>* FindParent(Node<T>* node, T x);
	Node<T>* FindMin(Node<T>* node);
};
