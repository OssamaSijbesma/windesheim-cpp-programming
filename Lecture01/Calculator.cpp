#include "Calculator.h"

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

int Calculator::sum(int a, int b) const
{
	return a + b;
}

int Calculator::power(int base, int powerRaised) const
{
	if (powerRaised != 0)
		return (base * power(base, powerRaised - 1));
	else
		return 1;
}

int Calculator::getArrayIndex(int values[], int value)
{
	int i;
	for (int item : values)
	{
		i++;
		if (item == value)
			return i;

	}
	return -1;
}
