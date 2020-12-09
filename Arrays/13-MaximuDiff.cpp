#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#naive's solution
int maximumDifference(int arr[],int n)
{
    int res = arr[1]-arr[0];
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;i<n;i++)
        {
        res = max(res, arr[j]-arr[i]);
        }
        }
    return res;
}

#efficient solution O(n)
int maximumDifference(int arr[],int n)
{
    int res = arr[1]-arr[0];
    int minVal = arr[0];
    for(int j=1;i<n;i++)
    {
      res = max(res, arr[j]-minVal);
      minVal = min(minVal, arr[j]);
    }
    return res;
}
