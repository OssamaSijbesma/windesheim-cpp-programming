#include "Exercise2.h"
#include <vector>

File::File()
{
}

File::~File()
{
	infile.close();
}

bool File::openFile(const char* filename)
{
	infile.close();
	infile.open(filename);
	return infile.is_open();
}

void File::printReversed()
{
	string contents;
	string line;
	vector<string> lines;

	if (infile.is_open())
	{
		while (!infile.eof()) {
			getline(infile, line);
			lines.push_back(line);
		}
		for (auto i = lines.rbegin(); i != lines.rend(); ++i)
			cout << *i << endl;
	}
}

void File::decode(const char * filename) const
{

}
