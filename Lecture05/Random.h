#pragma once
class Random
{
public:
	Random();
	~Random();
	unsigned long long Rand();
	unsigned long long Rand(int max);
	int* GeneratePermutation(int size);
private:
	unsigned long long number;
};

