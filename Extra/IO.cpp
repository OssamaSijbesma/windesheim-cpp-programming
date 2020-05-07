#include "IO.h"
#include "IO.h"

void IO::WriteTextFile(string filename)
{
	ofstream outputFile;
	outputFile.open(filePath + filename);

	if (outputFile.is_open())
	{
		outputFile << "This is a file blah blah." << endl;
		outputFile << "With a second line as well." << endl;
		outputFile.close();
	}
	else
		cout << "Can't open the output file." << endl;
}

void IO::ReadTextFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filePath + filename);

	string line;

	if (inputFile.is_open())
	{
		while (!inputFile.eof()) {
			getline(inputFile, line);
			cout << line << endl;
		}

		inputFile.close();
	}
	else
		cout << "Can't open the input file." << endl;
}

void IO::WriteBinaryFile(string filename, Person* persons, int size)
{
	ofstream outputFile;
	outputFile.open(filePath + filename, ios::binary);

	if (outputFile.is_open())
	{
		for (int i = 0; i < size; i++)
			outputFile.write((char*)&persons[i], sizeof(Person));
	}
	else
		cout << "Can't open the output file." << endl;
}

void IO::ReadBinaryFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filePath + filename, ios::binary);
	
	Person person;

	if (inputFile.is_open())
	{
		while (!inputFile.eof()) {
			inputFile.read((char*)&person, sizeof(Person));

			cout << person.name << endl;
			cout << person.age << endl;
		}
	}
	else
		cout << "Can't open the input file." << endl;
}

