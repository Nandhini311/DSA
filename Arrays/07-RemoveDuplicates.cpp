#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(int arr[])
{
    int temp[n];
    temp[0]=arr[0];                           //copying the first element to the temporary array
    int res=1;                                //position of temp
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])                  //checking if any two consequtive number is same
        {
            temp[res]=arr[i];
            res++;
        }
    }
    return temp;
}

#efficient solution

int RemoveDuplicates(int arr[])
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {   arr[res]=arr[i]
            res++;
        }
        return res;
    }
}
