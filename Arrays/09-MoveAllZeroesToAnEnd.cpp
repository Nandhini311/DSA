#efficient solution

void MoveAllZeroes(int arr[])
{
   int count = 0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]!=0)
      {
        swap(arr[i],arr[count]);
        count++;
       }
   }
  }
  
 
