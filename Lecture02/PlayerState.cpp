#include "PlayerState.h"

#define filename "C:/Users/Apollo/Desktop/PlayerData.txt"

PlayerState::PlayerState()
{
	strcpy_s(name, sizeof(name), "Homer");
	this->level = 1;
	this->health = 20;
	this->experience = 0;
}

PlayerState::~PlayerState()
{
}

void PlayerState::StreamOut()
{
	outputFile.open(filename);

	if (outputFile.is_open())
	{
		outputFile << name << std::endl;
		outputFile << level << std::endl;
		outputFile << health << std::endl;
		outputFile << experience << std::endl;

		outputFile.close();
	}
	else
		cout << "Oh no" << std::endl;
}

void PlayerState::StreamIn()
{
	string line;
	inputFile.open(filename);

	if (inputFile.is_open())
	{
		while(getline(inputFile,line))
			cout << line << std::endl;

		inputFile.close();
	}
	else
		cout << "Oh no" << std::endl;
}
