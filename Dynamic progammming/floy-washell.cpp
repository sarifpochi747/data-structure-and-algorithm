#include<iostream>
using namespace std;
#define n 4
#define INF 5000

void floy(int dis[][n])
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				dis[i][j] = (dis[i][j] > (dis[i][k] + dis[k][j]))? (dis[i][k] + dis[k][j]) : dis[i][j];
			}
		}
	}
}

int main()
{
	int dis[n][n] = {{0, 3, INF, 7},
             			{8, 0, 2, INF},
             			{5, INF, 0, 1},
             			{2, INF, INF, 0}};
    floy(dis);
             			
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout<<dis[i][j]<<" ";
		}
		cout<<"\n";
	}
}
