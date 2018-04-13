#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;




int 	solve(int* A, int size, int index, int max) {
    
    	cout << endl;
    	cout << "size " << size <<" index " << index << " Max " << max;
    	int result = 0;

        if(index >= size) {
        	cout << " returns " << 0 << endl;
            return 0;
        }

        if(A[index] <= max) {

        	result = solve(A, size, index+1, max);
        	cout << " returns " << result << endl;
            return result;
        } else {

        		cout << " Counting Left ";
				int left = solve(A, size, index+1, 0)+2;
				cout << left << endl;

				cout << " Counting Right " ;
				int right = solve(A, size, index+1, A[index]+6)+7;
				cout << right << endl;


        	result = (min( right , left));

        	cout << " returns " << result << endl;

            return result;
        }
        
}

int solutionRecursive(std::vector <int> v)
{

	if (v.size() <= 3) return v.size() * 2;
	if (v.size() >= 23) return 25;
	
	int* arr = new int[v.size()];

	std::copy(v.begin(), v.end(), arr);
//	cout << arr[0] << endl;
	
	cout << "Counting Left ";
	int left = solve(arr, v.size(), 1, 0)+2;
	cout <<" In Main Left " << left << endl;

	cout << "Counting Right " ;
	int right = solve(arr, v.size(), 1, arr[0]+6)+7 ;
	cout << "In Main right " << right << endl;

	int ans = min(right, left );

    return min(ans, 25);

}


int solution(vector<int> days)
{

	if (days.size() ==0 )
	{
		return 0;
	}

	const int ONEDAY_TICKET = 2;
	const int ONEWEEK_TICKET = 7;
	const int ONEMONTH_TICKET = 25;

	int WeekBucket = 0;

	int firstElement = days[0];
	int total = 0;

	for(auto day : days)
	{
		if ( day - firstElement <= 6) // in the same bucket 
		{
			WeekBucket++;
		}
		else  // Out of the assigned bucket
		{
			total += (WeekBucket <= 3) ? WeekBucket*ONEDAY_TICKET : ONEWEEK_TICKET;
			firstElement = day;

			WeekBucket = 1;
		}
	}

	total += (WeekBucket <= 3) ? WeekBucket*ONEDAY_TICKET : ONEWEEK_TICKET;


	total = (total <= 24) ? total : ONEMONTH_TICKET;

	return total;
}