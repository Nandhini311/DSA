#include<bits/stdc++.h>
using namespace std;

void PrintSubSet(string str, string curr=" ", int index=0)
{
    if(index==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    PrintSubSet(str,curr,index+1);
    PrintSubSet(str,curr+str[index],index+1);
}

int main()
{
    string str = "ABC";
    PrintSubSet(str," ",0);
    return 0;
}



