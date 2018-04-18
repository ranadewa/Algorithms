#include <queue>
#include <iostream>

using namespace std;

class BFSPathFinder{

public: 

	BFSPathFinder(Graph&  inputg, int sourceVertex){

		vertices = inputg.edgeCount();

		createArrays();

		verticesQue.push(sourceVertex);
		vertexMarked[sourceVertex] = true;

		doBreadthFirstSearch(inputg, sourceVertex);

		cout << "Operations Done" << endl;
	}

	~ BFSPathFinder(){
		delete [] vertexMarked;
	}
	
	bool hasPathTo(int vertex)
	{
		return vertexMarked[vertex];
	}

private:
	queue <int> verticesQue;

	bool* vertexMarked = nullptr;
	int*  edgeTo = nullptr;
	int vertices = 0;

	void createArrays(){


		vertexMarked = new bool[vertices];
		edgeTo 	 = new int[vertices];

		for (int index = 0; index < vertices; ++index)
		{
			vertexMarked[index] = false;
			edgeTo[index]	= -1;
		}

		cout << "Arrays Created" << endl;
	}

	void doBreadthFirstSearch(Graph & graph, int vertex){

		while( !verticesQue.empty() )
		{
			int quedV = verticesQue.front();
			verticesQue.pop();

			auto iterBegin 	= graph.getAdjacencyList(quedV);
			auto iterEnd	= graph.end();

			cout << quedV << " Poped." << endl;

			for(; iterBegin != iterEnd;  iterBegin++)
			{
				int connectedV = *iterBegin;

				if (vertexMarked[connectedV] == false)
				{
					vertexMarked[connectedV] = true;
					edgeTo[connectedV] = quedV;

					verticesQue.push(connectedV);

					cout << "\t" <<	connectedV << " Added" << endl;
				}
			}

		}
		
	}
};
