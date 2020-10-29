Pallindrome - results in the string or number when reversed too.

int Pallindrome(int originalnum)
{
  int num = originalnum;
  int rev = 0, var;
  while(num!=0)
  {
    var = num%10;
    num = num/10;
    rev = rev*10 + var;
   }
   if(originalnum = rev) cout<<"YES it is a pallindrome";
   else cout<<"NO it is not a pallindrome";
   return 0;
}
