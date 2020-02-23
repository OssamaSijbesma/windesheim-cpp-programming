// Lecture02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerState.h"
#include "PlayerStateStruct.cpp"
#include "Util.h"

int main()
{
    Util util;
    PlayerState player;

    // Exercise 2
    int i = 12;
    int j = 36;
    std::cout << "Simplify a Fraction " << i << "/" << j << " : ";
    util.Fraction(&i, &j);
    std::cout << i << "/" << j << std::endl;

    // Exercise 3
    util.NameArray();

    // Exercise 4
    char str[] = "madam";
    std::cout << "palindrome? " << util.IsPalindrome(str) << std::endl;

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

