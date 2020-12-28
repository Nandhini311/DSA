#include<bits/stdc++.h>
using namespace std;

int LastOccurrence(int arr[],int n,int x)
{
   int low=0, high=n-1;
   while(low<high)
   {
     int mid=(low+high)/2;
     if(arr[mid]<x)
        return LastOccurrence(arr, mid+1, high);
     else 
        return LastOccurrence(arr, low, mid-1);
    }
    if(mid == n-1 || arr[mid]!=arr[mid+1])
       return mid;
    else 
       return LastOccurrence(arr, mid+1,hight);
}

int main()
{
  int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;

	int x = 10;

    cout << lastOcc(arr, 0, n - 1, x, n);
	return 0;
 }
