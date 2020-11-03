int absolute(int i) {
    if(i<0) return -1*i;
    else if(i>=0) return i;
}

int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int i;
    cin>>i;
    absolute(i);
   }
}
