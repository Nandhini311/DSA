#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printfromN(int n)
{
    if(n==0)
      return;
    else
      printfromN(n-1);
      cout<<n<<" ";
}
int main() {
    printfromN(5);
    return 0;
}
