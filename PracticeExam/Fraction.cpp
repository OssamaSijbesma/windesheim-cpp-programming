#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denumerator = denominator;
}

Fraction::~Fraction()
{
}

Fraction& Fraction::operator*=(const Fraction& f)
{
	this->numerator *= f.numerator;
	this->denumerator *= f.denumerator;
	return *this;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.numerator, f1.denumerator * f2.denumerator);
}

ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f.numerator << " / " << f.denumerator;
	os.flush();
	return os;
}