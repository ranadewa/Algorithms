#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

bool hasUniqueChars(const string & word){

	int size = word.length();

	for (int outerIndex = 0; outerIndex < size; ++outerIndex)
	{
		char extactedChar = word[outerIndex];

		for (int innerIndex = outerIndex +1 ; innerIndex < size; ++innerIndex)
		{
			if (extactedChar == word[innerIndex])
			{
				return false;
			}
		}
	}
	return true;
}

bool hasUniqueCharsWithHashTable(const string & word)
{
	unordered_map<char, int> lookupTable;
	int size = word.length();

	for (int i = 0; i < size; ++i)
	{
		auto iter = lookupTable.find(word[i]);

		if (iter == lookupTable.end())
		{
			lookupTable.insert({word[i], 1});
		}
		else
		{
			return false;
		}
	}

	return true;
}