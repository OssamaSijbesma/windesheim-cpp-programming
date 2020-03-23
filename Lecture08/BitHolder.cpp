#include "BitHolder.h"

BitHolder::BitHolder()
{
	field = 0;
	unit = 0;
}

void BitHolder::SetTerrain(unsigned char terrain)
{
	field += terrain << 0b00111111;
	field |= terrain;
}
