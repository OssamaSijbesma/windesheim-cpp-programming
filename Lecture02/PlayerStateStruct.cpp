#pragma once
#include <fstream>
#include <iostream>

using namespace std;

struct PlayerStateStruct {
    char name[20];
    int level;
    double health;
    int experience;
};



void PrintPlayerState(PlayerStateStruct player);
void SavePlayerState(PlayerStateStruct* players, int length);
void ExportToTXT();

inline void PrintPlayerState(PlayerStateStruct player)
{
    std::cout << "name: " << player.name << std::endl;
    std::cout << "level: " << player.level << std::endl;
    std::cout << "health: " << player.health << std::endl;
    std::cout << "experience: " << player.experience << std::endl << std::endl;
}

inline void SavePlayerState(PlayerStateStruct* players, int length)
{

    FILE* file;
    fopen_s(&file, "C:/Users/Apollo/Desktop/game.dat", "wb");
    fwrite((PlayerStateStruct*)&players, sizeof(PlayerStateStruct), length, file);
    fclose(file);
 

    /*
        int i;
    ofstream file;
    file.open("C:/Users/Apollo/Desktop/game.dat", ios::binary);
    for (i = 0; i < length; i++)
        file.write((char*)&players[i], sizeof(PlayerStateStruct));
    file.close();
    */

}

inline void ExportToTXT()
{
    /*
        FILE* File;
    fopen_s(&File, "C:/Users/Mars/Desktop/game.dat", "wb");
    fread((char*)&players, sizeof(players), 3, File);
    fclose(File);
    PrintPlayerState()
    */

}
