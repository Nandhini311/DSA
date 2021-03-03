#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[]={10,20,5,9,22,8};
  int n = 6;
  sort(arr,arr+n);   //increasing order
  for(int x: arr)
        cout<<x<<" ";
  sort(arr,arr+n,greater<int>()); //comparison function-reverse order
  for(int x: arr)
        cout<<x<<" ";
  return 0;
}
