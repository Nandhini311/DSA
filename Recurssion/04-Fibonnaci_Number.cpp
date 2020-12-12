#include<bits/stdc++.h>
using namespace std;

int fibonnaci(int n)
{
   if(n==0||n==1)
      return n;
   else
      return fibonnaci(n-1)+fibonnaci(n-2);
}

int main()
{ 
  cout<<fibonnaci(6);
  return 0;
}
