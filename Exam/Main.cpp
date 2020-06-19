#include <iostream>


#define STUDENT 1	/* value: 0 -> FINAL VERSION; value: 1 -> STUDENT VERSION */
#define EXCER3_IMPLEMENTED 1	/* value: 0 -> NOT IMPLEMENTED; value: 1 -> IMPLEMENTED */


#include "Exercise1.h"
#include "Exercise2.h"
#include "Exercise3.h"
#include "Exercise4.h"


static int exercise1a();
static int exercise1b();
static int exercise1c();
static int exercise1d();
static int exercise1e();
static int exercise1f();
static int exercise2a();
static int exercise2b();
static int exercise2c();
static int exercise3a();
static int exercise3b();
static int exercise3c();
static int exercise4a();


#if STUDENT

/*
 * You are allowed to change these implementations for your own needs e.g. additional tests, longer lists, etc.
 */

int exercise1a()
{
	std::cout << "1a begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	delete q;
	std::cout << "created and destroyed Queue successfully\n";
	std::cout << "1a end------------\n";
		return 0;
}


int exercise1b()
{
	std::cout << "1b begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	for (int i = 0; i < 100000; i++)
	{
		q->enqueue(* new Coordinate(i, i));
	}
	delete q;
	std::cout << "created and destroyed Queue\n";
	return 0;
}


int exercise1c()
{
	std::cout << "1c begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	for (int i = 0; i < 10; i++)
	{
		q->enqueue(* new Coordinate(i, i));
	}
	std::cout << "Queue forward\n";
	q->print(true);
	std::cout << "\nQueue backward\n";
	q->print(false);
	delete q;
	std::cout << "\n1c end------------\n";
	return 0;
}


int exercise1d()
{
	const int numberElements = 1000000;
	std::cout << "1d begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(* new Coordinate(i,i));
	}
	int size = q->size();
	delete q;
	std::cout << (size == numberElements ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1d end------------\n";
	return 0;
}


int exercise1e()
{
	const int numberElements = 10;
	std::cout << "1e begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	for (int i = 0; i < numberElements; i++)
	{
		Coordinate * c = q->dequeue();
		if (c == nullptr || c->x != i || c->y != i)
		{
			std::cout << "Error enqueue/dequeue\n";
		}
		if (c != nullptr)
		{
			delete c;
		}
	}
	int size = q->size();
	delete q;
	std::cout << (size == 0 ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1e end------------\n";
	return 0;
}

int exercise1f()
{
	const int numberElements = 1000000;
	std::cout << "1f begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	q->clear();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	for (int i = 0; i < numberElements; i++)
	{
		Coordinate* c = q->dequeue();
		delete c;
	}
	q->clear();
	int size = q->size();
	delete q;
	std::cout << (size == 0 ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1f end------------\n";
	return 0;
}


int exercise2a()
{
	std::cout << "2a begin------------\n";
	File* f = new File();
	std::cout << "Opening Test.txt -> " << f->openFile("Test.txt") << "\n";
	std::cout << "Opening Undefined.txt -> " << f->openFile("Undefined.txt") << "\n";
	delete f;
	std::cout << "2a end------------\n";
	return 0;
}


int exercise2b()
{
	std::cout << "2b begin------------\n";
	File* f = new File();
	f->openFile("Test.txt");
	f->printReversed();
	delete f;
	std::cout << "2b end------------\n";
	return 0;
}


int exercise2c()
{
	std::cout << "2c begin------------\n";
	File* f = new File();
	f->openFile("Test.txt");
	f->decode("Decoded.txt");
	f->openFile("Decoded.txt");
	f->printReversed();
	delete f;
	std::cout << "2c end------------\n";
	return 0;
}


int exercise3a()
{
	std::cout << "3a begin------------\n";
	Weight* w = new Weight(1,16);
#if EXCER3_IMPLEMENTED
	std::cout << "W(1,16) = " << *w << "\n";
#endif
	delete w;
	std::cout << "3a end------------\n";
	return 0;
}


int exercise3b()
{
	std::cout << "3b begin------------\n";
	Weight* w1 = new Weight(1, 16);
	Weight* w2 = new Weight(16, 1);

#if EXCER3_IMPLEMENTED
	std::cout << "W(1,16) + W(16,1) = " << *w1 + *w2 << "\n";
#endif
	delete w1;
	delete w2;
	std::cout << "3b end------------\n";
	return 0;
}


int exercise3c()
{
	std::cout << "3c begin------------\n";
	Weight* w1 = new Weight(1, 16);
	Weight* w2 = new Weight(16, 1);
#if EXCER3_IMPLEMENTED
	*w1 += *w2;
	std::cout << "W(1,16) += W(16,1) = " << *w1 << "\n";
#endif
	delete w1;
	delete w2;
	std::cout << "3c end------------\n";
	return 0;
}


int exercise4a()
{
	std::cout << "4a begin------------\n";
	Avatar a;
	std::cout << "1: "; a.printState(); std::cout << "\n";
	a.setState(sleeping);
	std::cout << "2: "; a.printState(); std::cout << "\n";
	a.setState(sitting | running | falling);
	std::cout << "3: "; a.printState(); std::cout << "\n";
	a.setState(0xFF);
	std::cout << "4: "; a.printState(); std::cout << "\n";
	std::cout << "4a end------------\n";
	return 0;
}

#endif /* STUDENT */

/*
 * YOU ARE NOT ALLOWED TO CHANGE ANY OF THE CODE BELOW THIS LINE!
 */

int main()
{
#if STUDENT
	std::cout << "RUNNING STUDENT VERSION\n";
#else
	std::cout << "RUNNING FINAL VERSION\n";
#endif
	exercise1a();
	exercise1b();
	exercise1c();
	exercise1d();
	exercise1e();
	exercise1f();

	exercise2a();
	exercise2b();
	exercise2c();

	exercise3a();
	exercise3b();
	exercise3c();

	exercise4a();

	return 0;
}

#if ! STUDENT

int exercise1a()
{
	std::cout << "1a begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	delete q;
	std::cout << "created and destroyed Queue successfully\n";
	std::cout << "1a end------------\n";
	return 0;
}


int exercise1b()
{
	std::cout << "1b begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	for (int i = 0; i < 100000; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	delete q;
	std::cout << "created and destroyed Queue\n";
	std::cout << "1b end------------\n";
	return 0;
}


int exercise1c()
{
	std::cout << "1c begin------------\n";
	Queue* q = nullptr;
	q = new Queue();
	for (int i = 0; i < 10; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	std::cout << "Queue forward\n";
	q->print(true);
	std::cout << "\nQueue backward\n";
	q->print(false);
	delete q;
	std::cout << "\n1c end------------\n";
	return 0;
}


int exercise1d()
{
	const int numberElements = 1000000;
	std::cout << "1d begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	int size = q->size();
	delete q;
	std::cout << (size == numberElements ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1d end------------\n";
	return 0;
}


int exercise1e()
{
	const int numberElements = 10;
	std::cout << "1e begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	for (int i = 0; i < numberElements; i++)
	{
		Coordinate* c = q->dequeue();
		if (c == nullptr || c->x != i || c->y != i)
		{
			std::cout << "Error enqueue/dequeue\n";
		}
		if (c != nullptr)
		{
			delete c;
		}
	}
	int size = q->size();
	delete q;
	std::cout << (size == 0 ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1e end------------\n";
	return 0;
}

int exercise1f()
{
	const int numberElements = 1000000;
	std::cout << "1f begin------------\n";
	Queue* q = new Queue();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	q->clear();
	for (int i = 0; i < numberElements; i++)
	{
		q->enqueue(*new Coordinate(i, i));
	}
	for (int i = 0; i < numberElements; i++)
	{
		Coordinate* c = q->dequeue();
		delete c;
	}
	q->clear();
	int size = q->size();
	delete q;
	std::cout << (size == 0 ? "SUCCEEDED" : "FAILED") << "\n";
	std::cout << "1f end------------\n";
	return 0;
}


int exercise2a()
{
	std::cout << "2a begin------------\n";
	File* f = new File();
	std::cout << "Opening Test.txt -> " << f->openFile("Test.txt") << "\n";
	std::cout << "Opening Undefined.txt -> " << f->openFile("Undefined.txt") << "\n";
	delete f;
	std::cout << "2a end------------\n";
	return 0;
}


int exercise2b()
{
	std::cout << "2b begin------------\n";
	File* f = new File();
	f->openFile("Test.txt");
	f->printReversed();
	delete f;
	std::cout << "2b end------------\n";
	return 0;
}


int exercise2c()
{
	std::cout << "2c begin------------\n";
	File* f = new File();
	f->openFile("Test.txt");
	f->decode("Decoded.txt");
	f->openFile("Decoded.txt");
	f->printReversed();
	delete f;
	std::cout << "2c end------------\n";
	return 0;
}


int exercise3a()
{
	std::cout << "3a begin------------\n";
	Weight* w = new Weight(1, 16);
#if EXCER3_IMPLEMENTED
	std::cout << "W(1,16) = " << *w << "\n";
#endif
	delete w;
	std::cout << "3a end------------\n";
	return 0;
}


int exercise3b()
{
	std::cout << "3b begin------------\n";
	Weight* w1 = new Weight(1, 16);
	Weight* w2 = new Weight(16, 1);
#if EXCER3_IMPLEMENTED
	std::cout << "W(1,16) + W(16,1) = " << *w1 + *w2 << "\n";
#endif
	delete w1;
	delete w2;
	std::cout << "3b end------------\n";
	return 0;
}


int exercise3c()
{
	std::cout << "3c begin------------\n";
	Weight* w1 = new Weight(1, 16);
	Weight* w2 = new Weight(16, 1);
#if EXCER3_IMPLEMENTED
	*w1 += *w2;
	std::cout << "W(1,16) += W(16,1) = " << *w1 << "\n";
#endif
	delete w1;
	delete w2;
	std::cout << "3c end------------\n";
	return 0;
}


int exercise4a()
{
	std::cout << "4a begin------------\n";
	Avatar a;
	std::cout << "1: "; a.printState(); std::cout << "\n";
	a.setState(sleeping);
	std::cout << "2: "; a.printState(); std::cout << "\n";
	a.setState(sitting | running | falling);
	std::cout << "3: "; a.printState(); std::cout << "\n";
	a.setState(0xFF);
	std::cout << "4: "; a.printState(); std::cout << "\n";
	std::cout << "4a end------------\n";
	return 0;
}

#endif