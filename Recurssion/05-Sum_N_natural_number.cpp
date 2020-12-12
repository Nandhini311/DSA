#include<bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    if(n==0)
      return 0;
    else
      return n+getSum(n-1);
}

int main()
{ 
  cout<<getSum(6);
  return 0;
}
