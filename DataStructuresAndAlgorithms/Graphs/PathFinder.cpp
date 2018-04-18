#include "Graph.cpp"
#include <list>

#pragma once

class Path{

public : 
	Path(const Graph* inGraph,int inSourceVertex){

		graph = inGraph;
		sourceVertex = inSourceVertex;

		int count = graph->verticesCount();

		vertexVisited = new bool[count];
		edgeTo = new int[count];

		clear();

		DFS(sourceVertex);
	}

	bool hasPathTo(int vertex)
	{
		return vertexVisited[vertex];
	}

	list<int> getPath(){

		list<int> path;

		for (int i = 0; i < graph->verticesCount(); ++i)
		{
			
		}

		return path;
	}

	~Path()
	{
		delete [] vertexVisited;
		delete [] edgeTo;
	}

private:
	
	const Graph* graph = nullptr;
	int sourceVertex = -1;

	int*  edgeTo;
	bool* vertexVisited; 

	void DFS(int vertex)
	{
		if (!vertexVisited[vertex])
		{
			vertexVisited[vertex] = true;

			auto iter = graph->getAdjacencyList(vertex);
			auto iterEnd = graph->end();

			for(; iter !=  iterEnd ; iter ++)
			{

				int adjVerex = *iter;
				DFS(adjVerex);				
				edgeTo[adjVerex] = vertex;
			}	
		}
	}

	void clear(){

		int count = graph->verticesCount();
		for (int index = 0; index <  count; ++index)
		{
			edgeTo[index] = -1;
			vertexVisited[index] = false;
		}
	}
	
};