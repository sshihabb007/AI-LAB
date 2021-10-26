#include <iostream>

#define SIZE 100
#define CONNECTED 1
#define DISCONNECTED 0
#define WHITE -1
#define GREY 0
#define BLACK 1
#define EMPTY_PARENT -1

using namespace std;

int graph[SIZ+1][SIZE+1],node,edge;
int color[size+1],d[size+1],f[size+1],p[size+1],time;

void readgraph()
{
    int x,y;
    cout<<"Number of nodes: "
    cin>>node;

    for(int i=1;i<=node;i++)
        for(int j=1;j<=node)
        graph[i][j]=DISCONNECTED;

    cout<<"Number of edges: "
    cin>>edge;

    for(int i=1;i<=edge;i++)
    {
        cout<<"Enter edge"<<i<<": "<<;
        cin>>x>>y;
        graph[x][y]=graph[y][x]=CONNECTED;
    }
}

void dfsvisit(int c)
{
    color[c]=GREY;
    time=time+1;
    d[u]=time;

    for(int b=1;b<=node;b++)
    {
        if (graph[c][b]==CONNECTED)
        {
            if(color[b]==WHITE)
            {
                p[b]=c;
                dfsvisit(b);
            }
        }
    }

    color[c]=BLACK;
    time=time+1;
    f[c]=time;

}

