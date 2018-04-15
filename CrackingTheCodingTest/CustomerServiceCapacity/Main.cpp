#include <iostream>
#include <vector>
#include <map>
#include <typeinfo> 

using namespace std;

int howManyAgentsToAdd(int noOfCurrentAgents, vector < vector<int> > callsTimes) {

	int max =1;
    map<int, int> epocMap;

    for(int i = 0; i < callsTimes.size(); i++)
    {
        vector<int> time = callsTimes[i];

        int beg = time[0];
        int end = time[1];

        auto iter = epocMap.find(beg);

        if(iter == epocMap.end())
        {
        	cout << beg << " newly inseted" << endl;

          	 epocMap.insert({beg, 1});
          	 iter = epocMap.find(beg);

        }
        else
        {
            int tempCount = ++epocMap[beg];

            cout << beg << " count increased to " << tempCount << endl;

            if(tempCount > max)
            {
            	cout << tempCount << " set as max. Old " << max << end;
                max = tempCount;
            }
        }

        cout << "Iterating thought the values" << endl;

        iter ++;

        for(; iter != epocMap.end(); )
        {
            cout << "iter fist " <<  iter->first << " end " << end << endl;

            if(iter->first < end)
            {
                int tempCount = iter->second;
                tempCount ++;

                cout << beg << " count increased to " << tempCount << endl;

                if(tempCount > max)
                {
                	cout << tempCount << " set as max. Old " << max << endl;
                     max = tempCount;
                }
            }

            ++iter;
        }

        iter = epocMap.find(end);

        if(iter == epocMap.end())
        {
        	cout << end << " newly inseted" << endl;

          epocMap.insert({end, 1});
          	 iter = epocMap.find(end);
        }
        else
        {
            int tempCount = ++epocMap[end];

 			cout << beg << " count increased to " << tempCount << endl;
            if(tempCount > max)
            {
            	cout << tempCount << " set as max. Old " << max << endl;
                max = tempCount;
            }
        }

                cout << "Iterating thought the values" << endl;

        iter ++;

        for(; iter != epocMap.end(); )
        {
            cout << "iter fist " <<  iter->first << " end " << end << endl;

            if(iter->first > end)
            {
                int tempCount = iter->second;
                tempCount ++;

                cout << beg << " count increased to " << tempCount << endl;

                if(tempCount > max)
                {
                	cout << tempCount << " set as max. Old " << max << endl;
                     max = tempCount;
                }
            }

            ++iter;
        }
    }

    return max;
}









