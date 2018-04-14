class QuickUnion
{

public: 
	QuickUnion(int size){

		length = size;

		array = new int [size];

		for (int i = 0; i < size; ++i)
		{
			array[i] = i;
		}
	}

	int getRoot(int & i)
	{
			while(array[i] != i)
			{
				i = array[i];
			}

			return i;
	}

	void connectNodes(int i, int j){

		if (length < i || length < j)
		{
			return;
		}

		// get i's  root index.
		getRoot(i);

		 // get j's root index
		getRoot(j);

		array[i] = j;
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

	~QuickUnion(){
		delete [] array;
	}

private:
	int* array = nullptr;
	int length = 0;
};