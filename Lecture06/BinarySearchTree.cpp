#include "BinarySearchTree.h"
#include <iostream>
#include <string>

using namespace std;

template class BinarySearchTree<int>;
template class BinarySearchTree<double>;
template class BinarySearchTree<char>;
template class BinarySearchTree<string>;

int random_number()
{
	static int number = 1;
	number = (221 * number + 1) % 1000;
	return number;
}

int* permutation(int n)
{
	int i, random, temp;
	int* pointer = new int[n];
	for (i = 0; i < n; i++)
		pointer[i] = i + 1;
	for (i = n; i > 0; i--)
	{
		random = random_number() % i;
		temp = pointer[random];
		pointer[random] = pointer[i - 1];
		pointer[i - 1] = temp;
	}
	return pointer;
}

template <typename T>
Node<T>* create_leaf(T x)
{
	Node<T>* result = new Node<T>;
	result->info = x;
	result->left = NULL;
	result->right = NULL;
	return result;
}

template <typename T>
BinarySearchTree<T>::BinarySearchTree()
{
	root = NULL;
}

template <typename T>
void delete_subtree(Node<T>* pointer)
{
	if (pointer != NULL)
	{
		delete_subtree(pointer->left);
		delete_subtree(pointer->right);
		delete pointer;
	}
}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree()
{
	delete_subtree(root);
}

template <typename T>
void insert_in_subtree(Node<T>* pointer, T x)
{
	if (x < pointer->info)
	{
		// x is smaller and should be in the left subtree
		if (pointer->left == NULL)
			pointer->left = create_leaf(x);
		else
			insert_in_subtree(pointer->left, x);
	}
	if (x > pointer->info)
	{
		// x is greater and should be in right subtree
		if (pointer->right == NULL)
			pointer->right = create_leaf(x);
		else
			insert_in_subtree(pointer->right, x);
	}
}

template <typename T>
void BinarySearchTree<T>::insert(T x)
{
	if (root == NULL)
	{
		root = create_leaf(x);
	}
	else
	{
		insert_in_subtree(root, x);
	}
}

template <typename T>
void print_subtree_in_order(Node<T>* pointer)
{
	if (pointer != NULL)
	{
		print_subtree_in_order(pointer->left);
		cout << pointer->info << endl;
		print_subtree_in_order(pointer->right);
	}
}

template <typename T>
void BinarySearchTree<T>::traverse()
{
	print_subtree_in_order(root);
}

template <typename T>
bool is_present_in_subtree(Node<T>* pointer, T x)
{
	if (pointer == NULL)
		return false;
	if (pointer->info == x)
		return true;
	return (is_present_in_subtree(pointer->left, x) || is_present_in_subtree(pointer->right, x));
}

template <typename T>
bool BinarySearchTree<T>::is_present(T x)
{
	return is_present_in_subtree(root, x);
}

template <typename T>
void print_subtree(Node<T>* pointer, int depth)
{
	int i;
	for (i = 0; i < depth; i++)
		cout << "    ";
	if (pointer == NULL)
		cout << "--" << endl;
	else
	{
		cout << pointer->info << endl;
		print_subtree(pointer->left, depth + 1);
		print_subtree(pointer->right, depth + 1);
	}
}

template <typename T>
void BinarySearchTree<T>::print()
{
	print_subtree(root, 0);
}

template <typename T>
int max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
int depth_of_subtree(Node<T>* pointer)
{
	if (pointer == NULL)
		return 0;
	return 1 + max(depth_of_subtree(pointer->left), depth_of_subtree(pointer->right));
}

template <typename T>
int BinarySearchTree<T>::depth()
{
	return depth_of_subtree(root);
}