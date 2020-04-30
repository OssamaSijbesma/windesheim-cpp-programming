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

void Cipher::WriteFileXOR(char* text, const char* key)
{
	string string;
	string.append(filepath);
	string.append(key);
	string.append(".xor");

	ofstream file;
	file.open(string);
	if (file.is_open())
	{
		XOR(text, key);
		file << text;
		file.close();
	}
	else
		cout << "unable to open file " << filepath + *key << endl;
}

void Cipher::ReadFileXOR(const char* key)
{
	string string;
	string.append(filepath);
	string.append(key);
	string.append(".xor");

	int i = 0;
	char content[1024];
	ifstream file;
	file.open(string);
	if (file.is_open())
	{
		while (!file.eof())
		{
			content[i] = file.get();
			i++;
		}

		XOR(content, key);
		cout << content << endl;

		file.close();
	}
	else
		cout << "unable to open file " << string << endl;
}
