#pragma once
class BST
{
	struct Node
	{
		Node(int value);
		void Insert(int value);
		int value;
		Node* left;
		Node* right;
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
};

