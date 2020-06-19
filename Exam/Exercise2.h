#ifndef __Exercise2_H
#define __Exercise2_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class File
{
public:
File();
virtual	~File();

bool openFile(const char* filename);
void printReversed(); 
void decode(const char* filename) const;

private:
	ifstream infile;
};


#endif /* __Exercise2_H */
