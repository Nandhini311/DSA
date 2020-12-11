#include<bits/stdc++.h>
using namespace std

int factorial(int n)
{
   if(n==0||n==1)
      return n;
   else
      return factorial(n-1)*n;
}

int main()
{ 
  cout<<factorial(5);
  return 0;
}
