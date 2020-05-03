#pragma once
#include <iostream>

class Util
{
public:
	Util();
	~Util();
	void SimplifyFraction(int* numerator, int* denominator) const;
	int GCD(int a, int b) const;
	void NameArray() const;
	bool IsPalindrome(char str[]) const;

private:
	char names[4][20] =
	{
		"Jan",
		"Pier",
		"Tjores",
		"Corneel"
	};
};

