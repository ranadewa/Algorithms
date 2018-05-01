#include "Graph.cpp"

#pragma once 

class ConnectedComponents{

public: 
	ConnectedComponents(const Graph &  gh);
	bool isConnected(int v, int w);
	int componentCount();    // Number of Connected Components
	int id(int v); //  Component ID for v
	~ConnectedComponents(){

		delete [] connnectedArray;
		delete [] makedArray;	
	}


private: 
	int* connnectedArray;
	bool* makedArray;

	int count = 0;

	void createArray(int size);
	void doDepthFirstSearch(const Graph& gh, int vertex);
};

ConnectedComponents:: ConnectedComponents(const Graph& gh){

	int size = gh.verticesCount();
	
	createArray(size);

	for (int index = 0; index < size; ++index)
	{		
		if (makedArray[index] == false)
		{

			doDepthFirstSearch(gh, index);
			count ++;
		}
	}	

	for (int index = 0; index < size; ++index)
	{
		cout << "index:" << index << " ID:" << connnectedArray[index] << endl;
	}
}

void  ConnectedComponents::doDepthFirstSearch(const Graph& gh, int vertex){

	makedArray[vertex] = true;
	connnectedArray[vertex] = count;

	auto itrBegin = gh.getAdjacencyList(vertex);
	auto itrEnd   = gh.end();

	for(; itrBegin != itrEnd; itrBegin++){

		int adjVertex = *itrBegin;

		if (makedArray[adjVertex] == false)
			{
				makedArray[adjVertex] = true;
				connnectedArray[adjVertex] = count;

				doDepthFirstSearch(gh, adjVertex);
			}
	}
}

void ConnectedComponents::createArray (int size){

	connnectedArray = new int[size];
	makedArray		= new bool[size];

	for (int index = 0; index < size; ++index)
	{
		connnectedArray[index] = -1;
		makedArray[index]  = false;
	}
}

bool ConnectedComponents::isConnected(int v, int w){

	return connnectedArray[v] == connnectedArray[w];
}

int ConnectedComponents::componentCount(){

	return count;
}

int ConnectedComponents::id(int v){

	return connnectedArray[v];
}