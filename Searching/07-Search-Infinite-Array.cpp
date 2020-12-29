#include<bits/stdc++.h>
using namespace std;

int SearchInf(int arr[],int x)
{
  if (arr[0]==x) return 0;
  else
  int i=1;
  if(arr[i]<x)
   i=i*2;
  if(arr[i]==x) return x;
  else
    return bSearch(arr,i/2+1, i-1,x);
}

int main() {
  int arr[] = {1, 2, 3, 5, 5};
	int x = 4;
	cout << search(arr, x);
	return 0;
}
