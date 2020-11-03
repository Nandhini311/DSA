#include<iostream>
using namespace std;

//naive solution- O(n) - unsorted array
void LinearSearch(int arr[],int n, int x)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {     if(arr[i]==x)
              { cout<<"Element found at pos:"<<i+1;
                flag =1;
                break;
              }
    }
    if(flag==0) cout<<"Element not found";
}

//iterative solution - O(log n) use on sorted array
int BinarySearch(int arr[],int n, int x)
{
   int beg = 0, last = n-1;
   while(beg<=last)
   {
       int mid = (beg+last)/2;
       if(arr[mid]==x) 
       { 
           return mid;
       }
       else 
         if(arr[mid]<x) {
             beg = mid+1;
         }
       else
       { 
        last = mid-1;
       }
   }
   return -1;
}

//recurssive solution
int BinarySearch(int arr[], int beg, int last, int x)
{
  if(last>=beg)
  {
      int mid = (last+beg)/2;
      if(arr[mid]==x)
      { 
          return mid;
      }
      if(arr[mid]>x) {
          return BinarySearch(arr, beg, mid-1, x );
      }
      else return BinarySearch(arr, mid+1, last,x);
  }
  return -1;
}


//drivercode
int main() {
    int x, n;
    cin>>x;
    int arr[100]={1,3,4,5,8,9,10,16,29,31};
    //LinearSearch(arr,10,x);
    int pos = BinarySearch(arr, 0, 9, x);
    cout<<pos<<" ";
    return 0;
}


