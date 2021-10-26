#include<bits/stdc++.h>
#define infinity 1000
using namespace std;
int v,e,m;
int mat[555][555];
vector <int> dist;
int goal;

priority_queue <pair <int,int> > pq;
pair <int,int> pairy;

void ucs(int nul)
{
    dist[nul]=0;
    pairy.first=dist[nul];
    pairy.second=nul;
    pq.push(pairy);

    while(!pq.empty())
    {
       pairy=pq.top();
       pq.pop();
       m=pairy.second;
       for(int x=0 ; x<v; x++)
        {

           if(mat[m][x]!=555)
           {
              if (dist[x]>dist[m]+mat[m][x])
                {
                    dist[x]=dist[m]+mat[m][x];
                    pairy.first=0;
                    pairy.second=x;
                    pq.push(pairy);
                    if(m==goal)
                        return;
                }
            }

        }
    }

       return;
}


int main ()
{
    int s,d,cost;
    cin>>v;
    for (int i=0;i<v;i++)
    {
        for (int j=0; j<v; j++)
            {
                mat[i][j]=555;

            }
    }

    for (int i=0; i<v ; i++)
        {

            cin>>s;
            cin>>d;
            cin>>cost;
            mat[s][d]=cost;
        }


    for (int i = 0; i < v ; i++)
        {
            dist.push_back(infinity);
        }
    int pk;
    cin>>pk;
    cin>>goal;
    ucs(pk);
    cout<<endl;


    if(dist[goal]==infinity)
        {cout<<"Not reached...!";}
    else
    cout<<"Distance is :\t"<<dist[goal];


    return 0;
}

/*
Input:

10
1 2 10
1 4 5
2 3 1
2 4 3
3 5 6
4 2 2
4 3 9
4 5 2
5 1 7
5 3 4

1  3

Output:
path: 1 4 2 3
Cost: 8
*/

