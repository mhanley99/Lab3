// Matthew Hanley
// Lab 3
// COSC 2030
// October 1, 2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

short shortSum(short val)
{
	short sum = 0;
	short current = val;
	if (current >= 1)
	{
		for (short index = current; index > 0; index--)
		{
			sum = sum + index;
		}
	}
	else
	{
		sum = 1;
	}
	return sum;
}

long longSum(long val)
{
	long sum = 0;
	long current = val;
	if (current >= 1)
	{
		for (long index = current; index > 0; index--)
		{
			sum = sum + index;
		}
	}
	else
	{
		sum = 1;
	}
	return sum;
}

float floatFactorial(long val)
{
	float product = 1;
	long current = val;
	if (current >= 1)
	{
		for (long index = current; index > 0; index--)
		{
			product = product * index;
		}
	}
	else
	{
		product = 1;
	}
	return product;
}

double doubleFactorial(long val)
{
	double product = 1;
	long current = val;
	if (current >= 1)
	{
		for (long index = current; index > 0; index--)
		{
			product = product * index;
		}
	}
	else
	{
		product = 1;
	}
	return product;
}

double ratio(double n)
{
	double ratio = 1.0 / n;
	double sum = 0;
	for (double index = 0; index < n; index++)
	{
		sum += ratio;
	}
	double result = sum - 1;
	return result;
}

int main()
{
	//short n = 0;
	//long n = 0;
	double n = 0;

	cout << "Enter a value for n: ";
	cin >> n;
	//cout << "shortSum(n) result: " << shortSum(n) << endl;
	//cout << "longSum(n) result: " << longSum(n) << endl;
	//cout << "floatFactorial(n) result: " << floatFactorial(n) << endl;
	//cout << "doubleFactorial(n) result: " << doubleFactorial(n) << endl;
	//cout << "ratio(n) result: " << ratio(n) << endl;
	
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	

	system("pause");
	return 0;
}
