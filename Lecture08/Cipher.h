#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

const char filepath[] = "C:\\Users\\Mars\\Documents\\";
const char filesuffix[] = ".xor";

class Cipher
{
public:
	static void XOR(char* text, char key);
	static void XOR(char* text, const char* key);
	static void WriteFileXOR(char* text, const char* key);
	static void ReadFileXOR(const char* key);
private:
};

