#include<bits/stdc++.h>
using namespace std;

void PrintPowerSet(string str)
{
   int n = str.lenght();
   int powSize = pow(2,n);
   for(int counter = 0; counter< powSize; counter++)
   {  for(int j=0;j<n; j++)
        cout<<str[j];
   }
   cout<<'\n';
 }
        
