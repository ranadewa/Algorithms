#include <iostream>
#include <set>

using namespace std;

#pragma once
/*
	Graph using an adjacency List	
*/

class Graph{

public: 

	Graph(int vertices){

		verticesArray = new set<int>[vertices];
		size = vertices;
	}

	~ Graph(){
		delete [] verticesArray;
	}

	void addEdge(int v, int w){
		verticesArray[v].insert(w);
		verticesArray[w].insert(v);
	}

	int verticesCount() const{
		return size;
	}

	int edgeCount() const
	{
		int count = 0;

		for (int i = 0; i < size; ++i)
		{
			count += verticesArray[i].size();
		}

		return count / 2;
	}

	auto getAdjacencyList(int vertex) const{
		
		selectedVerex = vertex;
		return verticesArray[vertex].begin();
	}

	auto end() const{
		return verticesArray[selectedVerex].end();
	}

private:

 	set<int>* verticesArray = nullptr;
 	int size = 0;
 	mutable int selectedVerex = 0;
};

