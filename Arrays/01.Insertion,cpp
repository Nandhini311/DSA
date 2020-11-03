#include <iostream>
using namespace std;

int insertion(int arr[], int n, int pos, int x)
{
    int s = sizeof(arr);
    if(n == s)
       return n;
    else
      for(int i=n-1;i>=pos;i--)
      {
          arr[i+1] = arr[i];
      }
      arr[pos]=x;
      return n+1;
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100]={10,20,30,40};
    int n=4, pos, x;
    cin>>pos;
    cin>>x;
    n = insertion(arr, n, pos, x);
    display(arr, n);
    return 0;
}
