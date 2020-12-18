#include<bits/stdc++.h>
using namespace std;

//complexity: O(n) Time and O(1) Space
x^0 = x, its also commutative and associative, x^x=0

int findOdd(int arr[], int n)
{
   int res = 0;
   for(int i=0;i<n;i++)
     res = res^arr[i];
   return res;
}


   
