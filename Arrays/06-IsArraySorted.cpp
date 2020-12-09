#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsArraySorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
          return false;
    }
    return true;
}

int main()
{
    int arr[]={6,5,3,4,2,1};
    bool ans = IsArraySorted(arr,6);
    return 0;
}
