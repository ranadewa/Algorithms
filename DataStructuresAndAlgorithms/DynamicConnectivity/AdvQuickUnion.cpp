#include <iostream>

using namespace std;

class AdvQuickUnion
{

public: 
	AdvQuickUnion(int size){

		length = size;

		array = new int [size][2];

		for (int i = 0; i < size; ++i)
		{
			array[i][0] = i;
			array[i][1] = 1;
		}
	}

	void connectNodes(int node1, int node2){

		int i = node1;
		int j = node2;

		if (length < i || length < j)
		{
			return;
		}

		// get i's  root index.
		getRoot(i);

		 // get j's root index
		getRoot(j);

		if (i == j)
		{
			return; // already connected
		}

		if (array[i][1] > array[j][1]) // i's array is bigger
		{
			array[i][1] += array[j][1];
			array[j][0] = i;
			
		}
		else
		{
			array[j][1] += array[i][1];
			array[i][0] = j;
		}
	}

	bool isConnected(int i, int j)
	{

		if (length < i || length < j)
		{
			return false;
		}
			// get i's  root index.
			getRoot(i);

			 // get j's root index
			getRoot(j);

			return (i == j);
	}

	~AdvQuickUnion(){
		delete []  array;
	}

	void print(){

		for (int i = 0; i < length; ++i)
		{
			cout <<"(" <<  array[i][0] << "," << array[i][1] << ") " ;
		}
	}
private:
	int (*array)[2]	 ; // = {nullptr,nullptr};
	int length = 0;

	int getRoot(int & i)
	{
			while(array[i][0] != i)
			{
				array[i][0] = array[array[i][0]][0];

				i = array[i][0];
			}

			return i;
	}
};