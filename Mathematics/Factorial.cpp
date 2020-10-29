#Factorial - n! = 1x2x3x...x(n-1)X(n)

#iterative solution
int factorial(int num)
{
  int fact = 1;
  for(int i = 2;i<=n;i++)
  {  fact = fact*i; }
  return fact;
}

#recurssive solution
int factorial(int num)
{
  if(num==0)
   return 1;
  else return n*factorial(num-1);
}
