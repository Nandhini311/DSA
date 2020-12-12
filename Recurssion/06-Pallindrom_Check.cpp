#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string str, int start, int end)
{
    if(start>=end)
    {
        return true;
    }
    else
       return isPallindrome(str, start+1,end-1);
}
int main()
{ 
  cout<<isPallindrome("Madam",0,5);
  return 0;
}
