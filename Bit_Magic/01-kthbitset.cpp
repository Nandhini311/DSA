#include<iostream>
using namespace std;

//method 1:
void kthBit(int n)
{
	if(n & (1<<k-1) != 0)
		cout<<"yes kth bit is set";
	else
		cout<<"no it is not set";
}

//method 2: moving the kthbit to the last position 
void kthBit(int n)
{
	if((n>>k-1)&1 == 1)
		cout<<"yes kth bit is set";
	else
		cout<<"no it is not set";
}
