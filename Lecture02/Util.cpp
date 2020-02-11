#include "Util.h"

Util::Util()
{
}

Util::~Util()
{
}

void Util::Fraction(int* numerator, int* denominator) const
{
	int gcd = GCD(*numerator, *denominator);
	*numerator /= gcd;
	*denominator /= gcd;
}

int Util::GCD(int a, int b) const
{
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;

	return a;
}

void Util::NameArray() const
{
	for (int i = 0; i < 4; i++)
		std::cout << names[i] << "!" << std::endl;
}

bool Util::IsPalindrome(char str[]) const
{
	int l = 0;
	int h = strlen(str) - 1;

	while (h > l)
		if (str[l++] != str[h--])
			return false;

	return true;
}
