#include "Cipher.h"

void Cipher::XOR(char* text, const char key)
{
	for (int i = 0; i < 1024; i++)
	{
		text[i] = text[i] ^ key;
	}
}

void Cipher::XOR(char* text, const char* key)
{
	int keylength = strlen(key);
	for (int i = 0; i < 1024; i++)
	{
		text[i] = text[i] ^ key[i % keylength];
	}
}