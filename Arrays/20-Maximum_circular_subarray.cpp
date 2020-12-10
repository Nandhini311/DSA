#include <iostream>
#include <cmath>
using namespace std;
int MaxCircularSubarray(int arr[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
	    int curr_max = arr[i];
	    int curr_sum = arr[i];
	    for(int j=1;j<n;j++)
	    {
	        int index = (i+j)%n;
	        curr_sum += arr[index];
	        curr_max = max(curr_max,curr_sum);
	    }
	    res = max(res,curr_max);
	}
	return res;
}

int main() {
	
     int arr[] = {5, 0, 6, 2, 3}, n = 5;
     cout<<MaxCircularSubarray(arr, n);
    
}
