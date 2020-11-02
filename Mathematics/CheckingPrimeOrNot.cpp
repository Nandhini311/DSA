#include<iostream>
using namespace std;

#naive solution : Time complexity - O(n)
int checkPrime(int n)
{
   for(int i=2;i<n;i++)
   {
     if(n%i == 0)
       return false;
   }
   return true;
}

#divisors appear to be in pairs - O(/n)
int checkPrime(int n)
{
  if(n==1) return False;
  for(int i=2;i*i <n; i++)
  {
     if(n%i == 0)
       return false;
  }
  return true;
}

#efficient solution
int checkPrime(int n)
{
   if(n==1) return false;
   else if(n==2 || n==3) return true;
   else if(n%2 == 0 || n%3 == 0) return false;
   else{
   for(int i=5;i*i<n;i++)
   {
     if(n%i == 0)
      return false;
   }
   return true;
  }
}
