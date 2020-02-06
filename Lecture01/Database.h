#pragma once

class Database
{
public:
	Database();
	~Database();
	int getArrayIndex(int value);
	void BubbleSort(int* numbers, int size);

private:
	void swap(int *xp, int *yp);
	int items[10] = { 0,1,2,3,4,5,6,7,8,9 };
};

