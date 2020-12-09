#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[],int n)
{
    int freq = 1, i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq;
        i++;
        freq=1;
    }
}
