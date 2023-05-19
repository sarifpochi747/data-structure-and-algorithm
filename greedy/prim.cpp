#include<iostream>
using namespace std;

#define v  6
int int_max = 5000000;


int min_dist(int dist[],int mstSet[])
{
	int min = int_max,index_min;
	for(int i=0;i<v;i++)
	{
		if(mstSet[i] == 0 && dist[i] < min)
		{
			min = dist[i];
			index_min = i;
		}
	}
	return index_min;
}

void prim(int graph[][v])
{
	int count = 0;
	int mstSet[v];
	int parent[v];
	int dist[v];
	for(int i=0;i<v;i++)
	{
		mstSet[i]=0,parent[i] = -1,dist[i] = int_max;
	}
	
	dist[0] = 0;
	parent[0] = -1;
	while(count < v-1)
	{
		int u = min_dist(dist,mstSet);
		mstSet[u] = 1;
		cout<<"u: "<<u<<"\n";
		
		for(int i=0;i<v;i++)
		{
			if(graph[u][i] != 0 && mstSet[i] == 0 && graph[u][i] < dist[i])
			{
				dist[i] = graph[u][i];
				parent[i] = u;
				cout<<i<<" "<<dist[i]<<"\n";
			}
		}
		cout<<"------------------"<<"\n";
		
		count ++ ;
	}
	
	cout<<"dist: ";
	for(int i=0;i<v;i++)
	{
		cout<<dist[i]<<" ";
	}
	cout<<"\n";
	cout<<"parent: ";
	for(int i=0;i<v;i++)
	{
		cout<<parent[i]<<" ";
	}
	cout<<count;
}


int main()
{
	int graph[v][v] = {{0,3,0,0,5,0},
				       {3,0,5,0,6,0},
				       {0,5,0,9,0,3},
				       {0,0,9,0,0,7},
					   {5,6,0,0,0,2},
					   {0,0,3,7,2,0}};
					
	prim(graph);
}
