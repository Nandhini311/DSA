#include <iostream>
using namespace std;

#naive's solution
int gcd(int a, int b)
{
    int res = min(a,b);
    while(res>0)
    {
        if((res%a==0) && (res%b==0))
        {
          break;
        }
        res--;
    }
    return res;
}

#efficient solution
int gcd(int a, int b)
{
   while(a != b)
   {
     if(a>b)
       a = a-b;
     else
       b = b-a;
        }
      return a;
}

#much more efficient solution instead of subtracting
int gcd(int a, int b)
{
  if(b==0)
    return a;
  else return gcd(b, a%b);
}
