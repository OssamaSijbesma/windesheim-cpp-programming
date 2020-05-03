#pragma once
#include <fstream>
#include <iostream>
#define filePath "C:/Users/Mars/Desktop/gamedata.dat"
#define filePathTXT "C:/Users/Mars/Desktop/gamedata.txt"

using namespace std;

struct PlayerStateStruct {
    char name[20];
    int level;
    double health;
    int experience;
};

void PrintPlayerState(PlayerStateStruct player);
void SavePlayerState(PlayerStateStruct* players, int length);
void ExportToTXT(int length);

inline void PrintPlayerState(PlayerStateStruct player)
{
    std::cout << "name: " << player.name << std::endl;
    std::cout << "level: " << player.level << std::endl;
    std::cout << "health: " << player.health << std::endl;
    std::cout << "experience: " << player.experience << std::endl << std::endl;
}

inline void SavePlayerState(PlayerStateStruct* players, int length)
{
    /*
    FILE* file;
    fopen_s(&file, filePath, "wb");
    fwrite((PlayerStateStruct*)&players, sizeof(PlayerStateStruct), length, file);
    fclose(file);
  */

    ofstream file;
    file.open(filePath, ios::binary);

    if (file.is_open())
    {
        for (int i = 0; i < sizeof(players) / sizeof(PlayerStateStruct); i++)
            file.write((char*) &players[i], sizeof(PlayerStateStruct));

        file.close();
    }
    else
        cout << "Oh no" << std::endl;   
}

inline void ExportToTXT(int length)
{

    /*
    FILE* File;
    fopen_s(&File, filePath, "wb");
    fread((char*)&PlayerStateStruct, sizeof(PlayerStateStruct), 3, File);
    fclose(File);
    PrintPlayerState();
    */
    PlayerStateStruct players[10];

    ifstream inputFile;
    ofstream outputFile;

    inputFile.open(filePath, ios::binary);

    if (inputFile.is_open())
    {
        for (int i = 0; i < length; i++)
            inputFile.read((char*)&players[i], sizeof(PlayerStateStruct));

        inputFile.close();

        outputFile.open(filePathTXT);

        if (outputFile.is_open())
        {
            for (int i = 0; i < length; i++)
            {
                outputFile << players[i].name << std::endl;

                std::cout << "name: " << players[i].name << std::endl;

            }

            outputFile.close();
        }
        else
            cout << "Oh no txt" << std::endl;
    }
    else
        cout << "Oh no binary" << std::endl;
}
