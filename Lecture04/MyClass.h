#pragma once
class MyClass
{
public:
	MyClass();
	MyClass(int x, int p);
	~MyClass();
	void print();
	void setX(int x);
	void setP(int p);
	void deleteP();
private:
	int x;
	int* p;
};

