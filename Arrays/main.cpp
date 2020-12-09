/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n)
{
    int res = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[]={2,4,5,9,1,10,3};
    int pos = LargestElement(arr,7);
    cout<<arr[pos];
    return 0;
}
