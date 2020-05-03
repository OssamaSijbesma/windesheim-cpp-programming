#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

int Calculator::Sum(int a, int b) const
{
	return a + b;
}

bool Calculator::IsEven(int a) const
{
	if (a % 2 == 0)
		return true;

	return false;
}

int Calculator::Power(int base, int powerRaised) const
{
	if (powerRaised != 0)
		return (base * Power(base, powerRaised - 1));
	else
		return 1;
}

bool Calculator::IsPrime(int a) const
{
	if (a <= 3)
		return a > 1;
	else if (a % 2 == 0 || a % 3 == 0)
		return false;

	int i = 5;

	while (i * i < a)
	{
		if (a % i == 0 || a % i+2 == 0)
			return false;
		i += 6;
	}
	
	return true;
}

int Calculator::GCD(int a, int b) const
{
	while (a != b) 
		if (a > b)
			a = a - b;
		else
			b = b - a;

	return a;
}

int Calculator::LCM(int a, int b) const
{
	return a * b / GCD(a,b);
}
