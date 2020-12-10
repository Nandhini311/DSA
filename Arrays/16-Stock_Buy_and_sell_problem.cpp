
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#naive's solution
int maxProfit(int arr[],int start,int end)
{
    if(end<=start)
        return 0;
    else
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j++)
            {
                if(arr[j]>arr[i])
                {
                    int curr_profit = arr[j]-arr[i] + maxProfit(arr,start,i-1)+maxProfit(arr,j+1,end);
                    res = max(curr_profit,res);
                }
                
            }
        }
    } return res;
}

#efficient solution
int maxProfit(int arr[], int n)
{
   int profit = 0;
   for(int i=1;i<n;i++)
   {
     if(arr[i]>arr[i-1])
         profit += arr[i]-arr[i-1];
   }
   return profit;
}
