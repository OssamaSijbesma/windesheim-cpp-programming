#include "BitHolder.h"

BitHolder::BitHolder()
{
}

unsigned char BitHolder::SetTerrain(unsigned char field, unsigned char terrain)
{
	const char mask = terrain << 6;
	return field |= mask;
}

unsigned char BitHolder::SetField(unsigned char field, FieldData type)
{
	const char terrain = field >> 6;
	const char mask = 1 << type;
	bool allowed = true;

	if (type == extraction && terrain != sand && terrain != stone)
		allowed = false;

	if (type == terrain)
		allowed = false;

	return (allowed) ? field |= mask : field;
}

bool BitHolder::ContainsField(unsigned char field, FieldData type)
{
	const char mask = 1 << type;
	return ((field & mask) == mask) ? true : false;
}

unsigned char BitHolder::FetchTreasure(unsigned char field)
{
	const char mask = ~(1 << treasure);
	return field &= mask;
}

unsigned char BitHolder::CreateUnit()
{
	static int counter = 0;
	counter++;

	return counter << 4;
}

