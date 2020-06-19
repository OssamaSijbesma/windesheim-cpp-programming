#ifndef __Exercise1_H
#define __Exercise1_H
#include <string>

using namespace std;

struct Coordinate
{
	Coordinate(int x, int y);
	virtual ~Coordinate();
	int x;
	int y;
};

struct Node
{
	Node(Coordinate& c);
	virtual ~Node();
	struct Node* next;
	struct Coordinate* c;
};

class Queue
{
public:
	Queue();
	virtual	~Queue();
	void delete_node(Node* node);
	void enqueue(Coordinate& c);
	void print(bool forward) const;
	int	size() const;
	Coordinate* dequeue();
	void clear();

private:
	struct Node* begin;
	struct Node* end;
};

#endif /* __Exercise1_H */
