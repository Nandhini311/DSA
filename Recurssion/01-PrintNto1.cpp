#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int printfromN(int n)
{
    if(n==0)
      return -1;
    else
      cout<<n<<endl;
      return printfromN(n-1);
}
int main() {
    printfromN(5);
    return 0;
}
