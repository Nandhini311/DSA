#include<bits/stdc++.h>
using namespace std;

void bTraversal(int mat[R][C])
{
    if(R==1)
    { for(int i=0;i<C;i++)
        cout<<mat[0][i]<<" ";
    }
    else 
    if(C==1)
    { for(int i=0;i<R;i++)
        cout<<mat[i][0]<<" ";
    }
    else
    {
        for(int i=0;i<C;i++)
            cout<<arr[0][i]<<" ";
        for(int i=0;i<R;i++)
            cout<<arr[i][C-1]<<" ";
        for(int i=C-2;i>=0;i--)
            cout<<arr[R-1][i]<<" ";
        for(int i=R-2;i>=1;i--)
            cout<<arr[i][0]<<" ";
    }
}
