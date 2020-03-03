#pragma once
class BST
{
	struct Node
	{
		Node(int value);
		void Insert(Node* node);
		int value;
		Node* left;
		Node* right;
	};

public:
	BST();
	~BST();
	void Insert(int value);
private:
	Node* root;
};

