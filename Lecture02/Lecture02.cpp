// Lecture02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerState.h"
#include "PlayerStateStruct.cpp"
#include "Util.h"

using namespace std;


int main()
{
    Util util;
    PlayerState player;

    // Exercise 2
    int numerator1 = 12;
    int denominator1 = 36;
    cout << "Simplify a Fraction " << numerator1 << "/" << denominator1 << " : ";
    util.SimplifyFraction(&numerator1, &denominator1);
    cout << numerator1 << "/" << denominator1 << endl;

    int* numerator2 = new int(9);
    int* denominator2 = new int(90);
    cout << "Simplify a Fraction " << *numerator2 << "/" << *denominator2 << " : ";
    util.SimplifyFraction(numerator2, denominator2);
    cout << *numerator2 << "/" << *denominator2 << endl;

    // Exercise 3
    char names[4][20] = { "Jan", "Pier", "Tjores", "Corneel" };
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
    {
        for (int j = 0; j < sizeof(names[i]) / sizeof(names[i][0]); j++)
            cout << names[i][j];
        cout << endl;
    }

    const char* names1[4] = { "Jan", "Pier", "Tjores", "Corneel" };
    for (int i = 0; i < sizeof(names1) / sizeof(char*); i++)
    {
        for (int j = 0; j < strlen(names1[i]); j++)
            cout << names1[i][j];
        cout << endl;
    }

    util.NameArray();

    // Exercise 4
    char str[20];
    cout << "Type a word that's smaller than 20 letters: ";
    cin >> str;
    cout << (util.IsPalindrome(str)? "This word is a palindrome" : "This word is not a palindrome") << endl;

    // Exercise 5
    player.StreamOut();
    player.StreamIn();

    // Exercise 6 & 7
    PlayerStateStruct playerstates[3];

    strcpy_s(playerstates[0].name, sizeof(playerstates[0].name), "Homer");
    playerstates[0].level = 1;
    playerstates[0].health = 20;
    playerstates[0].experience = 0;

    strcpy_s(playerstates[1].name, sizeof(playerstates[1].name), "Jan");
    playerstates[1].level = 2;
    playerstates[1].health = 13;
    playerstates[1].experience = 12;

    strcpy_s(playerstates[2].name, sizeof(playerstates[2].name), "Nis");
    playerstates[2].level = 3;
    playerstates[2].health = 123;
    playerstates[2].experience = 1222;

    for (int i = 3 - 1; i >= 0; i--)
    {
        PrintPlayerState(playerstates[i]);
    }

    // Exercise 8
    SavePlayerState(playerstates, 3);

    // Exercise 9
    ExportToTXT(3);
}

