#include "Fraction.h"

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

Fraction& Fraction::operator*=(const Fraction& f)
{
	this->numerator *= f.numerator;
	this->denominator *= f.denominator;
	return *this;
}

ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f.numerator << " / " << f.denominator;
	os.flush();
	return os;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
}
