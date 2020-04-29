#pragma once
#include <iostream>

using namespace std;

// Terrains
const unsigned char grass = 0;
const unsigned char sand = 1;
const unsigned char stone = 2;
const unsigned char water = 3;

// All the different types
enum FieldData {unit, treasure, extraction, road, resource, village, terrain};
enum UnitData { id, type };

class BitHolder
{
public:
	BitHolder();
	unsigned char SetTerrain(unsigned char field, unsigned char terrain);
	unsigned char SetField(unsigned char field, FieldData type);
	unsigned char FetchTreasure(unsigned char field);
	bool ContainsField(unsigned char field, FieldData type);
	unsigned char CreateUnit();

private:
};

