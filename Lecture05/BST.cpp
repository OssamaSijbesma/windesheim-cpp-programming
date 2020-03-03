#include "BST.h"

BST::BST()
{
	//root = 0;
	//root = NULL;
	root = nullptr;
}

BST::~BST()
{
}

void BST::Insert(int value)
{
	Node* node = new Node(value);

	if (root == nullptr)
		root = node;
}

BST::Node::Node(int value)
{
	this->value = value;
}

void BST::Node::Insert(Node* node)
{
	if (value < node->value)
		
}
