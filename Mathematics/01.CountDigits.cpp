#counts the number of digits in a given Number

#iterative solution

int countDigit(int num)
{
   int digit = 0;
   while(num != 0)
   {
     num = num/10;
     digit += 1;
   }
   return digit;
}

#recurssive solution

int countDigit(int num)
{
   if(num==0) return 0;
   else return 1+countDigit(num/10);
}
