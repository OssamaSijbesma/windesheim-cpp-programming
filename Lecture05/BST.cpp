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
	if (!root)
		root = new Node(value);
	else root->Insert(value);
}

int BST::Depth()
{
	if (!root) return 0;
	else return root->Depth();
}

bool BST::IsPresent(int value)
{
	if (!root) return 0;

	Node* curNode = this->root;

	while (curNode) 
	{
		if (curNode->value == value)
			return true;

		curNode = (curNode->value > value) ? curNode->left : curNode->right;
	}

	return false;
}

void BST::Travers()
{
	root->PrintInfix();
}

void BST::Print()
{
}

// Constructor
BST::Node::Node(int value)
{
	this->value = value;
	this->left = nullptr;
	this->right = nullptr;
}

void BST::Node::Insert(int value)
{
	if (this->value == value) 
		this->value = value;
	else if (this->value > value)
		if (!this->left) this->left = new Node(value);
		else this->left->Insert(value);
	else if (this->value < value)
		if (!this->right) this->right = new Node(value);
		else this->right->Insert(value);
}

int BST::Node::Depth()
{
	int leftDepth = (this->left) ? this->left->Depth() : 0;
	int rightDepth = (this->right) ? this->right->Depth() : 0;
	return ((leftDepth > rightDepth) ? leftDepth : rightDepth) + 1;
}

void BST::Node::PrintInfix()
{
	std::cout << " [ ";
	
	if (this->left) this->left->PrintInfix();
	else std::cout << " ";

	std::cout << this->value;
	
	if (this->right) this->right->PrintInfix();
	else std::cout << " ";

	std::cout << " ] ";
}

