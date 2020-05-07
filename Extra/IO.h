#pragma once
#define filePath "C:\\Users\\Mars\\Desktop\\"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Person {
	string name;
	int age;
};

class IO
{
public:
	static void WriteTextFile(string filename);
	static void ReadTextFile(string filename);	
	static void WriteBinaryFile(string filename, Person* persons, int size);
	static void ReadBinaryFile(string filename);
private:
};

