#include<bits/stdc++.h>
using namespace std;

//method 1: removing the last bit after checking it
//complexity: total number of bits in the number
int countSet(int n)
{
    int res = 0;
    while(n>0)
    {
      if (n%2 !=0) //checking if last bit is set or not if ((n&1)==1)
           res++;
      n = n/2;     //n>>1;
    }
    return res;
 }
 
//res = res + (n&1); n>>1; (alternative satement that could have been used

//method 2: BRIAN KERINGAM'S ALGO  n=40 -> 40&39
//complexity: theta(set bit count0

int countSet(int n)
{
   while(n>0)
   {
     n = (n&(n-1));
     res++;
    }
    return res;
}

    
