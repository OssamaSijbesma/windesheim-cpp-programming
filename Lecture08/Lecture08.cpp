// Lecture08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BitHolder.h"
#include "Cipher.h"

using namespace std;

int main()
{
    BitHolder bitholder;

    unsigned char tile = 0;
    tile = bitholder.SetTerrain(tile, water);

    tile = bitholder.SetField(tile, treasure);
    cout << (bitholder.ContainsField(tile, treasure) ? "Treasure!" : "Nothing") << endl;

    tile = bitholder.FetchTreasure(tile);
    cout << (bitholder.ContainsField(tile, treasure) ? "Treasure!" : "Nothing") << endl;

    tile = bitholder.SetField(tile, treasure);

    char* story = new char[1024];
    strcpy_s(story, 1024, "Hello this is a beutiful story about a cow and a princess.");
    cout << story << endl;

    Cipher::XOR(story, 'a');
    cout << "encrypt with single char: " << endl;
    cout << story << endl;

    Cipher::XOR(story, 'a');
    cout << "decrypt with single char: " << endl;
    cout << story << endl;

    Cipher::XOR(story, "blerg");
    cout << "encrypt with a sentence: " << endl;
    cout << story << endl;

    Cipher::XOR(story, "blerg");
    cout << "decrypt with a sentence: " << endl;
    cout  << story << endl;

    Cipher::WriteFileXOR(story, "awh");
    Cipher::ReadFileXOR("awh");
}
