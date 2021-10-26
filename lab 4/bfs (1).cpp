#include<iostream>
#include<cstdio>

using namespace std;

    int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;

void bfs(int v)
{
    for (i=1;i<=n;i++)
        if(a[v][i] && !visited[i])
    	   q[++r]=i;
    if(f<=r)
    {
        visited[q[f]]=1;
        bfs(q[f++]);
    }
}
int main()
{
    int v,m;
     printf("Input Number of Node: ");
    scanf("%d",&n);
    printf("Input Number of edge: ");
    scanf("%d",&m);
    for (i=1;i<=n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            a[i][j]=0;
    }
    while(i<m)
    {
        printf("Source Node: ");
        scanf("%d",&s);
        printf("Destination Node: ");
        scanf("%d",&d);
        a[s][d]=1;
        i++;
    }


    printf("\n Enter the starting vertex:");
    scanf("%d",&v);
    bfs(v);
    printf("\n The node which are reachable are:\n");
    for (i=1;i<=n;i++)
    	  if(visited[i])
    	   printf("%d\t",i);
        else
    	   printf("\n Bfs is not possible");

    return 0;
    }
