#include <iostream>

using namespace std;

int ex1_sum(int a, int b)
{
	return a + b;
}

void ex2_check_even(int a)
{
	if (a % 2 == 0)
		cout << a << " is even." << endl;
	else
		cout << a << " is uneven." << endl;
}


int ex3_power_option1(int base, int exponent)
{
	if (exponent == 0)
		return 1;
	return base * ex3_power_option1(base, exponent - 1);
}

/*	The difference between option 1 and option 2 is that option 2 reduces
 *	the amount of multiplications. This is especially useful when
 *	multiplication is an expensive operation, like matrix multiplication.
 *	Also when exponent is a big number, this reduces operating time.
 *	For example, we want to calculate 2^16. This function first
 *	calculates 2^8 and places it in a temporary variable named result.
 *	This result is multiplied with itself to get 2^16
 *	because (2^8) * (2^8) = 2^16.
 *	This means we need only one multiplication to get from 2^8 to 2^16.
 *	Option 1 needs 8 multiplications to get to 2^16 from 2^8.
 */
int ex3_power_option2(int base, int exponent)
{
	int result = 1;
	if (exponent == 0)
		return 1;
	if (exponent == 1)
		return base;
	result = ex3_power_option2(base, exponent / 2);
	result *= result;
	if (exponent % 2 == 1)
		result *= base;
	return result;
}

// apparently, 'sqrt()' is not only in <math.h> anymore :)
bool ex4_is_prime(int a)
{
	bool result = true;
	int divisor = 2;
	while (divisor <= sqrt(a) && result)
	{
		if (a % divisor == 0)
			result = false;
		divisor++;
	}
	return result;
}


//	the exercise forgot to mention it, 
//	but you have to tell the size of the array.
int ex5_contains(int numbers[], int size, int value)
{
	int i;
	for (i = 0; i < size; i++)
		if (numbers[i] == value)
			return i;
	return -1;
}


void ex6_bubble_sort(int numbers[], int size)
{
	int i, j, temp;
	for (j = 0; j < size; j++)
	{
		for (i = 1; i < size - j; i++)
		{
			if (numbers[i - 1] > numbers[i])
			{
				temp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = temp;
			}
		}
	}

}


int ex7_gcd(int a, int b)
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


int ex8_lcm(int a, int b)
{
	return (a * b) / ex7_gcd(a, b);
}



int main()
{
	int x = 2;
	int y = 3;
	int z = 16;
	int prime = 1908404569;
	const int size = 8;
	int numbers[size] = { 2, 4, 0, 6, 5, 3, 7, 1 };

	cout << "The sum = " << ex1_sum(x, y) << endl;

	ex2_check_even(x);
	ex2_check_even(y);

	cout << x << " to the power " << y << " is " << ex3_power_option1(x, y) << endl;
	cout << x << " to the power " << z << " is " << ex3_power_option2(x, z) << endl;

	if (ex4_is_prime(z))
		cout << z << " is prime." << endl;
	else
		cout << z << " is not prime." << endl;

	if (ex4_is_prime(prime))
		cout << prime << " is prime." << endl;
	else
		cout << prime << " is not prime." << endl;

	cout << y << " is at location " << ex5_contains(numbers, size, y) << endl;

	ex6_bubble_sort(numbers, size);
	cout << "The numbers sorted: ";
	for (int i = 0; i < size; i++)
		cout << numbers[i];
	cout << endl;

	cout << "The greatest common divisor is " << ex7_gcd(z, 12) << endl;

	cout << "The least common multiple is " << ex8_lcm(x * y, 14) << endl;

	return 0;
}