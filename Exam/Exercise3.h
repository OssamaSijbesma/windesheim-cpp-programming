#ifndef __Exercise3_H
#define __Exercise3_H
#include <ostream>
#include <fstream>

using namespace std;

class Weight
{
public:

Weight(int pounds, int ounces);
virtual	~Weight();
void print() const;
void add(int pounds, int ounces);
Weight& operator+=(const Weight& w);
friend ostream& operator<<(ostream& os, const Weight& w);
friend Weight operator+(const Weight& w1, const Weight& w2);

private:
long weight; // in ounces
};


#endif /* __Exercise3_H */
