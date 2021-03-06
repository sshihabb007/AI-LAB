#include<iostream>
#include<stdio.h>

int G[50][50], x[50];

void next_color(int k)
{
   int i,j;
   x[k]=1;
   for(i=0;i<k;i++)
	{
		if(G[i][k]!=0 && x[k]==x[i])
		x[k]=x[i]+1;
	}
}

int main()
{
	int n,e,i,j,k,l;
	scanf("%d",&n);
	scanf("%d",&e);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			G[i][j]=0;
		}
  	}

	for(i=0;i<e;i++)
	{
		scanf("%d %d",&k,&l);
		G[k][l]=1;
		G[l][k]=1;
	}

	for(i=0;i<n;i++)
	{
		next_color(i);
	}

	printf("Colors of vertices -->\n");
	for(i=0;i<n;i++)
	{
		printf("Vertex[%d] : %d\n",i+1,x[i]);
	}


  return 0;
}
/*
4 5
0 1
1 2
1 3
2 3
3 0
*/
