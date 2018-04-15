#include <iostream>

#include <vector>
#include <map>

using namespace std;


vector<int> getClosetsPoints(vector<vector<int>> & pointsArray, int count)
{

	for(auto point : pointsArray)
	{
		cout << point[0] << "," << point[1] << " " ;
	}

	cout << endl;
	
	vector<int> closestPoints;


	map<int, int> lengthIndexMap;

	for(int i = 0; i < pointsArray.size() ; i++){

		int x = pointsArray[i][0];
		int y = pointsArray[i][1];

		int distance = x*x + y*y;

		lengthIndexMap.insert({ distance, i}); // Map is sorted by the inserted Keys
	}

	int i = 0;

	for(auto iter =lengthIndexMap.begin(); iter != lengthIndexMap.end(); iter ++)
	{
		if (i == count)
		{
			break;	
		}

		int index = iter->second ;

		cout << i << " " << index << " closest point " << pointsArray[index][0] << "," << pointsArray[index][1] << endl;

		i++;
	}


	return closestPoints;
}


