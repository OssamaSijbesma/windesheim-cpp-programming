#include "MyClass.h"
#include <iostream>

MyClass::MyClass()
{
	x = 0;
	p = 0;
}

MyClass::MyClass(int x, int p)
{
	this->x = x;
	this->p = new int(p);
}

MyClass::~MyClass()
{
	delete p;
}

void MyClass::print()
{
	std::cout << "x: " << x << std::endl;
	std::cout << "p adress: " << p << std::endl;
}

void MyClass::setX(int x)
{
	this->x = x;
}

void MyClass::setP(int p)
{
	this->p = new int(p);
}

void MyClass::deleteP()
{
	delete p;
}
