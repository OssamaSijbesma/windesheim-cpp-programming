#pragma once
#include <ostream>

using namespace std;

class Fraction
{
public:
	Fraction(int n, int d);
	~Fraction();
	static int LCM(int n1, int n2);
	Fraction& operator*=(const Fraction& f);
	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend ostream& operator<<(ostream& os, const Fraction& f);

private:
	Fraction();
	int numerator;
	int denumerator;

};

