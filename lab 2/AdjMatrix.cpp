#include <iostream>
#include <stdio.h>
using namespace std;

 int traverse(int matrix[20][20],int n);

int main()
{
    int mat[20][20];
    int indeg,outdeg,i,j,n;

    cout<<"Input Vertex Number : ";
    cin>>n;
    traverse(mat,n);

    cout<<"\n Vertex \tIn Degree \tOut Degree \tTotal Degree ";

    for(i=1;i<=n;i++){
        indeg = outdeg = 0;
        for(j=1;j<=n;j++){
            if(mat[j][i]==1)
                indeg++;
                }
         for(j=1;j<=n;j++){
            if(mat[i][j]==1)
                outdeg++;
                }
            cout<<"\n\n "<<i<<" \t\t "<<indeg<<" \t\t "<<outdeg<<" \t\t "<<indeg+outdeg<<" ";

    }

    return 0;
}

int traverse(int matrix[20][20],int n)
{
    int i,j;
    char ans;

    for( i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j)
            {
                matrix[i][j]=0;
            continue;
            }
            cout<<"Are Vertices "<<i<<" and "<<j<<" Adjacent?(y/n) :";
            cin>>ans;

            if(ans=='y')
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }
    }
    return 0;
}
