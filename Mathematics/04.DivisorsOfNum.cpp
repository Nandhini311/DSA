#include<iostream>
using namespace std;

void printDivisors(int n)
{
 for(int i=1;i*i<n;i++)
 {
   if(n%i == 0)
    { cout<<i<<" ";
    }
   if(i != (n/i))       //perfect square 25 = 5*5 (5 wont get printed twice)
   {
     cout<<(n/i)<<" ";
   }
 }
}

//printing in sorted order

void printDiviosr(int n)
{
  for(int i=1;i*i<n; i++)
  {
     if(n%i ==0)
        cout<<i<<" ";
  }
  for(;i>=1;i--)
  {
    if(n%i ==0 )
      cout<<(n/i)<<" ";
  }
 }
    
