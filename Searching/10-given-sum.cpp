#two pointer approach (pair)

bool isPair(int n,int x)
{
  int low=0, high=n-1;
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
   
