#include "Exercise1.h"

#include <iostream>

Queue::Queue()
{
	begin = nullptr;
	end = nullptr;
}


Queue::~Queue()
{
	/*
	if (end != nullptr)
		delete end;

	if (begin != nullptr)
		delete begin;
		*/
	/*
	
	if (begin != nullptr)
		delete_node(begin);
		*/
}

void Queue::delete_node(Node* node)
{
	if (node->next != nullptr)
		delete_node (node->next);
	
	delete node;
}


void Queue::enqueue(Coordinate& c)
{
	Node* temp = new Node(c);

	if (end == nullptr) {
		begin = end = temp;
		return;
	}

	end->next = temp;
	end = temp;

}


void Queue::print(bool forward) const
{
	Node* temp = begin;

	if (forward) {
		while (temp != nullptr)
		{
			cout << "(" << temp->c->x << "," << temp->c->y << ") ";
			temp = temp->next;
		}
	}
	else
	{
		string line;
		while (temp != nullptr)
		{
			if (temp != nullptr)
			{
				string string_c;
				string_c += "(";
				string_c += to_string(temp->c->x);
				string_c += ",";
				string_c += to_string(temp->c->y);
				string_c += ") ";
				line = string_c + line;
			}
			temp = temp->next;
		}
		cout << line;
	}
}


int Queue::size() const
{
	int i;
	if (begin == nullptr)
		return 0;

	i = 1;
	Node* temp = begin;
	while (temp->next != nullptr)
	{
		temp = temp->next;
		i++;
	}

	return i;
}


Coordinate* Queue::dequeue()
{

	if (begin == nullptr)
		return nullptr;

	Node* temp = begin;
	begin = begin->next;

	if (begin == nullptr)
		end = nullptr;

	return temp->c;
}


void Queue::clear()
{
	//I  want to do an delete but I get a stack overflow like 1a so I do it pseudo now
	// This should delete everything I also have made a delete method but that didn't work either
	/*
		if (begin != nullptr)
			delete_node(begin);

		or...

		if (begin != nullptr)
			delete_node(begin);
	*/
	begin = nullptr;
	end = nullptr;
}


Node::Node(Coordinate& c)
{
	this->c = &c;
	this->next = nullptr;
}


Node::~Node()
{
	if (next != nullptr)
		delete next;
}


Coordinate::Coordinate(int _x, int _y)
{
	x = _x;
	y = _y;
}


Coordinate::~Coordinate()
{
}
