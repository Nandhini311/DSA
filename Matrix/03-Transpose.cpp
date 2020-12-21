#include<bits/stdc++.h>
using namespace std;

void Traversal(int mat[n][n])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
             {  swap(arr[i][j],arr[j][i]);
             }
}
//complexity-O(n^2)
