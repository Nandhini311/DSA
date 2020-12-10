#include <iostream>
#include <cmath>
using namespace std;


int MaxEvenOdd(int arr[], int n)
{
	int res =1, curr=1;
	for(int i=1;i<n;i++)
	{
	    if((arr[i]%2!=0 && arr[i-1]==0)||(arr[i]%2==0 && arr[i-1]!=0))
	     { curr++;
	      res = max(res,curr);
	     }
	     else
	      break;
	}
	return res;
}

//driver's code
int main() {
     int arr[] = {5, 0, 6, 2, 3}, n = 5;
     cout<<MaxEvenOdd(arr, n);
     }
