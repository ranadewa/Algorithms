#include <iostream>
#include <string>

using namespace std;

bool isPermutation(const string & first, const string & second)
{
	if (first.length() != second.length())
	{
		return false;
	}

	int  asciiSet[128] = {0};

	for (int i = 0; i < first.length(); ++i)
	{
		asciiSet[first[i]] ++;
	}

	for (int i = 0; i < second.length(); ++i)
	{
		asciiSet[second[i]] --;
	}

	for (int i = 0; i < 128; ++i)
	{
		if (asciiSet[i] != 0)
		{
			return false;
		}
	}

	return true;
}
