
#include <iostream>
using namespace std;

int lcm(int a, int b)
{
  int res = max(a,b);
  while(true){
  if(res%a == 0 && res%b == 0)
  {
      break;
  }
  else
    res++;
  }
  return res;
}

#more efficient solution
int lcm(int a, int b)
{
  return (axb)/(gcm(a,b));
}
 

int main()
{
    int lcm = lcm(2,25);
    cout<<lcm;
    return 0;
}
