// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int convertToValue(char value)
{
	if (value >= '0' && value <= '9'  )   // 48 to 57
	{
		return value - '0';
	}
	else if (value >= 'A' && value <= 'F') // 65 to 70
	{
		return value - 'A' + 10;
	}
	else if (value >= 'a' && value <= 'f') // 97 to 102
	{
		return value - 'a' + 10;
	}

	return -1;
}

int convertToBaseTen(string value, int base)
{
	if (base < 2)
	{
		return -1;
	}

	int length = value.length();
	int total = 0;

	for (int i = 0; i < length; ++i)
	{
		int conValue = convertToValue(value[i]);

		if (conValue == -1 || conValue >= base )
		{
			return -1;
		}

		int exponential = length - 1 - i;

		total += conValue * pow(base, exponential);
	}

	cout << "Value " << value.c_str() << " Converted To "<<  total << endl;

	return total;
}

bool compareBinaryToHex(string binary, string hex)
{

	int convertedBinary = convertToBaseTen(binary, 2);
	int convertedHex = convertToBaseTen(hex, 16);

	if (convertedBinary == -1 || convertedHex == -1)
	{
		return -1;
	}
	else
	{
		return convertedBinary == convertedHex;
	}
}

int main()
{
	cout << compareBinaryToHex("1111", "F") << endl;
	cout << compareBinaryToHex("11111", "F") << endl;
	cout << compareBinaryToHex("11111", "1F") << endl;

	return 0;
}

