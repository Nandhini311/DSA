#efficient solution
void Transpose(int mat[][],int m,int n)
{
   for(int i=0;i<m;i++)
   { for(int j=i+1;j<n;j++)
       swap(mat[i][j], mat[j][i]);
   }
}
