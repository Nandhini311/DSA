#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(int n)
{
    if(n==0)
       return 0;
    else
      return SumOfDigits(n/10)+n%10;
}

int main()
{
    cout<<SumOfDigits(123);
    return 0;
}
