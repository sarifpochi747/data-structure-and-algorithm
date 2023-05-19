#include<iostream>
using namespace std;

int n = 4;
int m = 3;
int x[10];

class Graph
{
    public:
        int edges[100][100];
        int vertex;

        //constructor
        Graph(int n)
        {
            vertex = n;
            for(int i=0;i<vertex;i++)
            {
                for(int j=0;j<vertex;j++)
                {
                    edges[i][j] = 0;
                }
            }
        }

        void add_edges(int x,int y)
        {
            edges[x][y] = 1;
        }
        void Display()
        {
            for(int i=0;i<vertex;i++)
            {
                cout<<i<<":";
                for(int j=0;j<vertex;j++)
                {
                    if(edges[i][j] >= 0)
                    {
                        cout<<edges[i][j]<<" ";
                    }
                }
                cout<<"\n";
            }
        }

};

void print()
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<"\n";
}

bool isSafe(int k,int c,Graph g)
{
    for(int i=0;i<n;i++)
    {
        if(((g.edges[k][i] == 1)&&(c == x[i])))
        {
            return false;
        }
    }
    return true;
}

void graphColour(int k,Graph g)
{
    for(int c=1;c<=m;c++)
    {
        if(isSafe(k,c,g))
        {
            x[k] = c;
            if((k+1) < n)
            {
                graphColour(k+1,g);
            }
            else
            {
                print();
            }
        }
    }
}

int main()
{
    Graph g(n);
    g.add_edges(0,0);
    g.add_edges(0,1);
    g.add_edges(0,3);
    g.add_edges(1,0);
    g.add_edges(1,1);
    g.add_edges(1,2);
    
    g.add_edges(1,3);
    g.add_edges(2,1);
    g.add_edges(2,2);
    g.add_edges(2,3);

    g.add_edges(3,0);
    g.add_edges(3,1);
    g.add_edges(3,2);
    g.add_edges(3,3);
    
    graphColour(0,g);
}
