#include "Fraction.h"

int LCM(int n1, int n2)
{
	int max = (n1 > n2) ? n1 : n2;

	do
	{
		if (max % n1 == 0 && max % n2 == 0)
			return max;
		else
			++max;
	} while (true);
}

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

Fraction::~Fraction()
{
}

double Fraction::Calculate() const
{
	return (double) numerator / (double) denominator;
}

Fraction& Fraction::operator=(const Fraction& f)
{
	this->numerator = f.numerator;
	this->denominator = f.denominator;
	return *this;
}

Fraction& Fraction::operator+=(const Fraction& f)
{
	int lcm = LCM(this->denominator, f.denominator);
	this->numerator = (lcm / denominator * numerator) + (lcm / f.denominator * f.numerator);
	this->denominator = lcm;
	return *this;
}

Fraction& Fraction::operator-=(const Fraction& f)
{
	int lcm = LCM(this->denominator, f.denominator);
	this->numerator = (lcm / denominator * numerator) - (lcm / f.denominator * f.numerator);
	this->denominator = lcm;
	return *this;
}

Fraction& Fraction::operator*=(const Fraction& f)
{
	this->numerator *= f.numerator;
	this->denominator *= f.denominator;
	return *this;
}

Fraction& Fraction::operator/=(const Fraction& f)
{
	this->numerator *= f.denominator;
	this->denominator *= f.numerator;
	return *this;
}



ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f.numerator << " / " << f.denominator;
	os.flush();
	return os;
}

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
	int lcm = LCM(f1.denominator, f2.denominator);
	return Fraction((lcm / f1.denominator * f1.numerator) + (lcm / f2.denominator * f2.numerator), lcm);
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	int lcm = LCM(f1.denominator, f2.denominator);
	return Fraction((lcm / f1.denominator * f1.numerator) - (lcm / f2.denominator * f2.numerator), lcm);
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
}

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.denominator, f1.denominator * f2.numerator);
}
