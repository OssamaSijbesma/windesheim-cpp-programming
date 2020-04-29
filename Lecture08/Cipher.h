#pragma once
#include <string.h>

class Cipher
{
public:
	static void XOR(char* text, char key);
	static void XOR(char* text, const char* key);
private:
};

