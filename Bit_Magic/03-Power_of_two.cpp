#include<bits/stdc++.h>
using namespace std;

//method 1: naive's solution
bool isPOW2(int n)
{
   if(n==0)
      return false;
   else
    while(n != 1)
    {   if(n%2 !=0)
          return false;
        n=n/2;
    }
    return true;
}

//method 2: power of 2 has only one bit set
bool isPOW2(int n)
{ if(n==0)
    return false;
  else return (n&(n-1)==0);
 }
 
 bool isPOW2(int n)
 { return ((n!=0)&&(n&(n-1)==0)'
 }

        
