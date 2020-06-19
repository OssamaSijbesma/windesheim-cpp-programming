#include <iostream>

#include "Exercise3.h"


Weight::Weight(int pounds, int ounces)
{
	weight = ounces + pounds * 16;
}

Weight::~Weight()
{
}

void Weight::print() const
{
	std::cout << "Pounds: " << (weight / 16) << " Ounces: " << (weight % 16);
}


void Weight::add(int pounds, int ounces)
{
	weight += (pounds * 16) + ounces;
}

Weight& Weight::operator+=(const Weight& w)
{
	this->weight += w.weight;
	return *this;
}


ostream& operator<<(ostream& os, const Weight& w)
{
	os << "Pounds: " << (w.weight / 16) << " Ounces: " << (w.weight % 16);
	os.flush();
	return os;
}

Weight operator+(const Weight& w1, const Weight& w2)
{
	return Weight((w1.weight + w2.weight) / 16, (w1.weight + w2.weight) % 16);
}
