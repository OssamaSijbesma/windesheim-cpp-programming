#pragma once

const unsigned char grass = 0;
const unsigned char sand = 1;
const unsigned char stone = 2;
const unsigned char water = 3;

const unsigned char unit = 0;
const unsigned char treasure = 1;
const unsigned char extraction = 2;
const unsigned char road = 3;
const unsigned char resource = 4;
const unsigned char village = 5;
const unsigned char terrain = 6;



const unsigned char terrainMask = 0b11000000;

class BitHolder
{
public:
	BitHolder();
	void SetTerrain(unsigned char terrain);

private:
	unsigned char field;
	unsigned char unit;
};

