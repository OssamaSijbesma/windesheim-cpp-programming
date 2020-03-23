#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calc_gcd(int a, int b)
{
	int temp;
	while (b > 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void ex2_simplify(int& numerator, int& denominator)
{
	int gcd = calc_gcd(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
}

void ex3_name_array()
{
	char names[4][20] =
	{
		"Jan",
		"Pier",
		"Tjores",
		"Corneel"
	};
	for (int i = 0; i < 4; i++)
		cout << names[i] << "!" << endl;
}

bool ex4_palindrome(char word[])
{
	int length = strlen(word);
	for (int i = 0; i < length / 2; i++)
		if (word[i] != word[length - 1 - i])
			return false;
	return true;
}

void ex5_read_textfile(string filename)
{
	char letter;
	ifstream file;
	file.open(filename);
	if (file.is_open())
	{
		letter = file.get();
		while (!file.eof())
		{
			cout << letter;
			letter = file.get();
		}
		file.close();
	}
	else
		cout << "unable to open file " << filename << endl;
}

struct PlayerState
{
	char name[32];
	int	level;
	double health;
	int experience;
};

/* Apparently 'strcpy_s' needs a const(!) char array
 * We'll get back to that later.
 */
void ex7_fill_PlayerState(
	PlayerState& state,
	const char name[],
	int level,
	double health,
	int experience)
{
	strcpy_s(state.name, name);
	state.level = level;
	state.health = health;
	state.experience = experience;
}

void ex7_print_state(PlayerState state)
{
	cout << "name: " << state.name
		<< ", level: " << state.level
		<< ", health: " << state.health
		<< ", exp: " << state.experience
		<< endl;
}

void ex8_save_states(PlayerState states[], int size)
{
	int i;
	ofstream file;
	file.open("c:\\cppfiles\\game.dat", ios::binary);
	for (i = 0; i < size; i++)
		file.write((char*)&states[i], sizeof(PlayerState));
	file.close();
}

void ex9_read_gamedata()
{
	int i;
	PlayerState localstate;
	ifstream gamedatafile;
	ofstream gametextfile;
	gamedatafile.open("c:\\cppfiles\\game.dat", ios::binary);
	gametextfile.open("c:\\cppfiles\\gamenames.txt");
	if (gamedatafile.is_open())
	{
		for (i = 0; i < 3; i++)
		{
			gamedatafile.read((char*)&localstate, sizeof(PlayerState));
			gametextfile << localstate.name << endl;
		}
		gamedatafile.close();
	}
	else
		cout << "unable to open gamedata file" << endl;
}

int main()
{
	int i;
	int a = 14;
	int b = 42;
	char word1[20] = "racecar";
	char word2[20] = "abcdecba";
	string filename = "c:\\cppfiles\\test.txt";
	PlayerState states[3];

	cout << a << "/" << b << " = ";
	ex2_simplify(a, b);

	cout << a << "/" << b << endl;
	ex3_name_array();

	if (ex4_palindrome(word1))
		cout << word1 << " is a palindrome" << endl;
	else
		cout << word1 << " is not a palindrome" << endl;

	if (ex4_palindrome(word2))
		cout << word2 << " is a palindrome" << endl;
	else
		cout << word2 << " is not a palindrome" << endl;

	ex5_read_textfile(filename);

	ex7_fill_PlayerState(states[0], word1, 1, 100.0, 0);
	ex7_fill_PlayerState(states[1], word2, 8, 236.7, 12345);
	ex7_fill_PlayerState(states[2], filename.c_str(), 2, 128.4, 1024);

	for (i = 0; i < 3; i++)
		ex7_print_state(states[i]);

	ex8_save_states(states, 3);

	ex9_read_gamedata();
}