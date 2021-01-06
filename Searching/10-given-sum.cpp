#two pointer approach (pair)

#O(n)
bool isPair(int arr,int low, int high,int x)
{
  while(low<=high)
  {
    if(arr[low]+arr[high]<x)
      low++;
    else if(arr[low]+arr[high]>x)
      high--;
    else
      return true;
   }
   return false;
  }
   

#(O^n)
bool isTriplet(int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(isPair(arr, i+1,n-1, x-arr[i]));
    return true;
  }
  return false;
}
  
