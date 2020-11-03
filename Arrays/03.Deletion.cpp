#include<iostream>
using namespace std;

int deletion(int a[], int pos, int n)
{
    for(int i=pos-1;i<n-1;i++){
        a[i] = a[i+1];
    }
    return n-1;
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//driver code
int main()
{
  int arr[100] = {1, 2, 4, 8, 9, 7, 5, 6};
  int pos, n;
  cin>>pos;
  //int n = sizeof(arr)/sizeof(arr[0]);
  n = deletion(arr, pos, 8);
  display(arr,n);
  return 0;
}
