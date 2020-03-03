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
	if (!root) root = new Node(value);
	else root->Insert(value);
}

int BST::Depth()
{
	return 0;
}

bool BST::IsPresent(int x)
{
	return false;
}

void BST::Travers()
{
}

void BST::Print()
{
}

// Constructor
BST::Node::Node(int value)
{
	this->value = value;
}

void BST::Node::Insert(int value)
{
	if (this->value == value) this->value = value;
	else if (this->value > value)
		if (!this->left) this->left = new Node(value);
		else this->left->Insert(value);
	else if (this->value < value)
		if (!this->right) this->right = new Node(value);
		else this->right->Insert(value);
}


