//Given a number n, print all primes smaller than or equal to n

#include<iostream>
using namespace std;

void seive(int n)
{
  vector<bool> isPrime(n+1, true);
  for(int i=2; i*i<=n; i++)
  {
    if(isPrime[i]==true)
    {
      for(int j=i*i;j<=n;j++)
      {
        isPrime[j]=false;
      }
    }
  }
  for(int i=2; i<=n; i++)
  {
   if(isPrime[i])
     cout<<i<<" ";
  }
}
