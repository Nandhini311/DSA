#peak element- not smaller than neighbor elements

#include<iostream>
using namespace std;

#naive solution
void peakElement(int arr[])
{ if(n==1) return arr[0];
  if(arr[0]>=arr[1]) return arr[0];
  if(arr[n-1]>= arr[n-2]) return arr[n-1];
  for(int i=1;i<n-1;i++)
  {
     if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
       return arr[i];
   }
   return -1;
 }
 
 #efficient solution
#include <iostream>
using namespace std;



int getPeak(int arr[], int n)
{
	int low = 0, high = n - 1;
		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;                            //left subarray
			else
				low = mid + 1;                            //right subarray
		}
	return -1;
}

int main() {
 int arr[] = {0,1,2,3,4,11,6}, n = 7;
 cout << getPeak(arr, n);
	return 0;
}
