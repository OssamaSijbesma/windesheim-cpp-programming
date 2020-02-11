#pragma once
#include <fstream>
#include <iostream>


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
    fopen_s(&file, "C:/Users/Mars/Desktop/game.dat", "wb");
    fwrite((PlayerStateStruct*)&players, sizeof(players), length, file);
    fclose(file);
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
