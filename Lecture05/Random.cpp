#include "Random.h"
#include "Limits.h"
#include <ctime>
#include <iostream>
#define BASE 221
#define INCREMENT 1

Random::Random()
{
	time_t rawTime;
	time(&rawTime);
	number = rawTime;
}

Random::~Random()
{

}

unsigned long long Random::Rand()
{
	return (number = (BASE * number + INCREMENT) % ULLONG_MAX);
}

unsigned long long Random::Rand(int max)
{
	return (number = (BASE * number + INCREMENT) % max);
}

int* Random::GeneratePermutation(int size)
{
	int* perm = new int[size];
	int* seq = new int[size];

	for (int i = 0; i < size; i++)
		seq[i] = i+1;

	for (int i = 0, j = size; i < size; i++, j--)
	{
		int pos = Rand(j);
		perm[i] = seq[pos];
		seq[pos] = seq[j - 1];		
	}

	delete[] seq;
	return perm;
}
