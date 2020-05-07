#include "World.h"

World::World()
{
	map = new unsigned char*[MAP_SIZE];

	for (int i = 0; i < MAP_SIZE; i++)
		map[i] = new unsigned char[MAP_SIZE];


	for (int x = 0; x < MAP_SIZE; x++)
		for (int y = 0; y < MAP_SIZE; y++)
		{
			map[x][y] = 0;
			char mask = RandomNumber(4) << 6;
			map[x][y] |= mask;
		}
}

World::~World()
{
	delete map;
}

void World::DisplayMap()
{
	for (int x = 0; x < MAP_SIZE; x++)
	{
		for (int y = 0; y < MAP_SIZE; y++)
		{
			unsigned char terrain = map[x][y] >> 6;

			if (terrain == grass)
				cout << "w";
			else if (terrain == sand)
				cout << "_";
			else if (terrain == stone)
				cout << "#";
			else if (terrain == water)
				cout << "~";
		}
		cout << endl;
	}
}

void World::FetchTreasure(int x, int y)
{
	const char mask = ~(1 << treasure);
	map[x][y] &= mask;
}


void World::SetField(int x, int y, FieldData type)
{
	const char terrain = map[x][y] >> 6;
	const char mask = 1 << type;
	bool allowed = true;

	if (type == extraction && terrain != sand && terrain != stone)
		allowed = false;

	if (type == terrain)
		allowed = false;

	if (allowed)
		map[x][y] |= mask;
}

int World::RandomNumber(int max)
{
	static int number = 1;
	number = (221 * number + 1) % max;
	return number;
}
