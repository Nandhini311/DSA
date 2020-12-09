#by reversing
void LeftRotateD(int arr[],int n)
{
   reverse(0,d-1);
   reverse(d,n-1);
   reverse(0,n-1);
}

#method2:
voidLeftRotateD(int arr[],int n)
{
  int temp[d];
  for(int i=0;i<d;i++)
  {  temp[i]=arr[i];
  }
  for(int i=0;i<n;i++)
  { arr[i=d]=arr[i];
  }
  for(int i=0;i<d;i++)
  {
    arr[n-d+i]=temp[i];
  }
}
