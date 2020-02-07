#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class PlayerState
{
public:
	PlayerState();
	~PlayerState();
	void StreamOut();
	void StreamIn();

private:
	char name[20];
	int level;
	double health;
	int experience;
	ifstream inputFile;
	ofstream outputFile;
};