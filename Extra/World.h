#pragma once
#include <iostream>

using namespace std;

const int MAP_SIZE = 10;

// Terrains
const unsigned char grass = 0;
const unsigned char sand = 1;
const unsigned char stone = 2;
const unsigned char water = 3;

// All the different types
enum FieldData { unit, treasure, extraction, road, resource, village, terrain };

class World
{
public:
	World();
	~World();
	void DisplayMap();
	void FetchTreasure(int x, int y);
	void SetField(int x, int y, FieldData type);
private:
	int RandomNumber(int max);
	unsigned char** map;
};

