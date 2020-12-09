#naive's solution
int MaximumNumberOnes(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr = 0;
        if(arr[i]==1)
        {
            curr += 1;
        }
        else
        {
            break;
        }
        res = max(res, curr);
    }
    return res;
}

#efficient solution
int MaximumNumberOnes(int arr[],int n)
{
  int res=0, curr=0;
  for(int i=0;i<n;i++)
  {
    if(arr[0]==0)
       curr =0;
    else
    {
      arr[i]==arr[i+1]
      {
        curr++;
        res = max(curr, res);
      }
    }
    return res;
}
