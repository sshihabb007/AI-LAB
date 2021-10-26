#include<bits/stdc++.h>
#include<vector>
#include<utility>
#define infinite 2000


using namespace std;

int v,e,m,ct=1;
int mat[555][555];
vector <int> dist;
int goal;

priority_queue <pair<int,int> > pq;
pair <int,int> pr;

void ucs(int y)
{
    dist[y]=0;
    pr.first=dist[y];
    pr.second=y;
    pq.push(pr);

    while(!pq.empty())
    {
       pr=pq.top();
       pq.pop();
       m=pr.second;
       for(int x=0 ; x<v; x++)
        {
           if(mat[m][x]!=555)
           {
              if (dist[x]>dist[m]+mat[m][x])
                {
                    dist[x]=dist[m]+mat[m][x];
                    pr.first=0;
                    pr.second=x;
                    pq.push(pr);
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
    cout<<"Enter no of Edges: ";
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
                cout<<"Edge: "<<ct<<"\n";
            cin>>s>>d>>cost;
            mat[s][d]=cost;
            ct++;
        }


    for (int i = 0; i < v ; i++)
        {
            dist.push_back(infinite);
        }
    int pk;

    cout<<"\n Enter the starting node and Goal node: ";
    cin>>pk;
    cin>>goal;
    ucs(pk);
    cout<<endl;


    if(dist[goal]==infinite)
        {cout<<"Goal Not found....";}
    else
    cout<<"Distance is :\t"<<dist[goal];


    return 0;
    }
