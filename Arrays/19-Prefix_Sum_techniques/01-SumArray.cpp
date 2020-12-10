#include <iostream>
#include <cmath>
using namespace std;

int sum[10000];
void prefixSum(int arr[], int n)
{
	sum[0]=arr[0];
	for(int i=1;i<n;i++)
	{
	    sum[i] = sum[i-1]+arr[i];
	}
}

int getSum(int sum[], int l, int r)
{
    if(l!=0)
       return sum[r]-sum[l-1];
    else
       return sum[r];
}

int main() {
	
     int arr[] = {2, 8, 3, 9, 6, 5, 4}, n = 7;
     prefixSum(arr,5);
     cout<<getSum(sum, 2,4);
     return 0;
}
