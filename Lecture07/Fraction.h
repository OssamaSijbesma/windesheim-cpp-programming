#pragma once
#include <ostream>

using namespace std;

static int LCM(int n1, int n2);

class Fraction
{
public:
	Fraction(int numerator, int denominator);
	~Fraction();
	double Calculate() const;

	Fraction& operator=(const Fraction& f);
	Fraction& operator+=(const Fraction& f);
	Fraction& operator-=(const Fraction& f);
	Fraction& operator*=(const Fraction& f);
	Fraction& operator/=(const Fraction& f);

	friend ostream& operator<<(ostream& os, const Fraction& f);
	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
	friend Fraction operator-(const Fraction& f1, const Fraction& f2);
	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend Fraction operator/(const Fraction& f1, const Fraction& f2);
	
private:
	Fraction();
	int numerator;
	int denominator;
};

