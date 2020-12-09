#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leader(int arr[], int n)
{
  int curr_leader = n-1;
  for(int i=n-2;i>=0;i--)
  {
    if(arr[i]>curr_leader)
      curr_leader = arr[i];
  }
    cout<<curr_leader<<endl;
}

int main()
{
    int arr[]={7,10,4,10,6,5,2};
    leader(arr,7);
    return 0;
}
