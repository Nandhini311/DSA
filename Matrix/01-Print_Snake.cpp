#include <bits/stdc++.h>
using namespace std;

void PrintSnake(int arr[4][4], int R, int C)
{
    for(int i=0;i<R;i++)
        if(i%2==0)
        { for(int j=0;j<C;j++)
            cout<<arr[i][j]<<" ";
        }
        else
        { for(int j=C-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
        }
}

int main()
{
    int arr[4][4] = {{10,12,14,15},
                   {23,45,67,78},
                   {12,23,34,45},
                   {56,67,78,89}};
    PrintSnake(arr,4,4);
    return 0;
}
