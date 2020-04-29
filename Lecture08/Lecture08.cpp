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
    cout << story << endl;

    Cipher::XOR(story, 'a');
    cout << story << endl;

    Cipher::XOR(story, "blerg");
    cout << story << endl;

    Cipher::XOR(story, "blerg");
    cout << story << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
