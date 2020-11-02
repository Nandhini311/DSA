#naive's solution
void primeFactor(int n)
{
  for(int i=2;i<n;i++)
  {
    if(isprime(i))
    {  
      int x = i;
      while(n%x == 0)
         {
          cout<<i; 
          x = i*x;
          }
    }
}}

#divisors appear in pair
void primeFactor(int n)
{
  if(n<=1) return n;
  for(int i=2;i*i<n;i++)
  {
    if(n%i == 0)
      n = n/i;
  }
  if(n>1) cout<<n<<" "<<endl;
}


#optimized solution
void primeFactor(int n)
{
  if(n<=1) cout<<"Not valid";
  if(n%2 == 0)
    { 
    cout<<2<<" ";
    n = n/2;
    }
  else if(n%3 == 0)
  {
   cout<<3<<" "; 
   n = n/3;
   }
   for(int i=5;i*i<n;i=i+6)
   {
     while(n%i == 0)
      {
       cout<<i;
       n=n/i;
      }
     while(n%(i+2) == 0)
     {
      cout<<(i+2);
      n = n/(i+2);
      }
   }
  if(n>3)
  cout<<n<<""<<endl;
}
