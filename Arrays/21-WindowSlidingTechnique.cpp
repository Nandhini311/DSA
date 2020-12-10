#include <iostream>
#include <cmath>
using namespace std;

int windowSliding(int arr[], int n, int k)
{
    int res=0;
    for(int i=0;i<=n-k;i++)
    {
       int sum=0;
       for(int j=0;j<k;j++)
       {
           sum+=arr[i+j];
       }
       res = max(res,sum);
    }
    return res;
}

int main() {
	
     int arr[] = {2, 8, 3, 9, 6, 5, 4}, n = 7;
     cout<<windowSliding(arr,n,3);
     return 0;
}
