#include <iostream>
#include <string.h>

using namespace std;

void reverseSolution(char* inputBuffer)
{
	char* begin = inputBuffer; 
	char* end = inputBuffer; // end pointed to begining
	char  temp;


	if (inputBuffer)
	{
		while(*end != '\0')
		{
			++end;
		}                 // after existing end will be pointing to null

		--end; // take the pointer back to the last letter

		while(begin < end)
		{
			temp = *begin;

			*begin = *end;

			*end = temp;

			begin ++;
			end --;
		}
	}
}

void reverseCharBuffer(char* array)
{
	int i = 0;

	while(array[i] != '\0')
	{
		i++;
	}

	char tempBuffer[i];

	strncpy(tempBuffer, array, i);

	int k = 0;
	for (int j = i - 1; j >= 0; --j)
	{
		array[k] = tempBuffer[j];
		k++;
	}

	array[k] = '\0';
}
	


