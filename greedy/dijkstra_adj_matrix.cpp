#include<iostream>
using namespace std;
#define V 5
#define int_max 50000

void printSolution(int dist[],int parent[], int n)
{ int i;
  printf("Vertex Distance from Source\n");
  for (i = 0; i < V; i++)
  {
		printf("%d %d\n", i, dist[i]);	
  }
      	
  for (i = 0; i < V; i++)
     	printf("%d ", parent[i]);
}

int minDistance(int dist[],int inTree[])
{
	int min,index_min;
	min = int_max;
	for(int i=0;i<V;i++)
	{
		if(inTree[i] == 0 &&  dist[i] < min)
		{
			min = dist[i];
			index_min = i;
		}
	}
	return index_min;
}

void dijkstra(int graph[][V] , int scr)
{	
	int dist[V] ;
	int inTree[V] ;
	int parent[V] ;
	
	for(int i=0;i<V;i++)
	{
		dist[i] = int_max;
		inTree[i] = 0;
		parent[i] = -1;
	}
	dist[scr] = 0;
	for(int i=0;i<V; i++)
	{
		int u = minDistance(dist,inTree);    // find node u with minimum distance
		cout<<"u: "<<u<<"\n";
		inTree[u] = 1; // add u into the tree
		for(int j=0;j<V;j++)  // update all minimum weight
		{
			int temp = dist[u] + graph[u][j];
			if(inTree[j] == 0 && graph[u][j] > 0 && temp < dist[j])
			{
				dist[j] = temp;
				cout<<j<<": "<<dist[j]<<"\n";
				parent[j] = u;
			}
		}
		for(int i=0;i<V;i++)
		{
			cout<<dist[i]<<" ";
		}
		cout<<"\n"<<"-------------------"<<"\n";
	}
	printSolution(dist, parent, V);
	for(int i=0;i<V;i++)
	{
		cout<<inTree[i]<<" ";
	}
}


int main()
{ 	int graph[V][V] = {{0,5,0,9,1},
						{5,0,2,0,0},
						{0,2,0,6,0},
						{9,0,6,0,2},
						{1,0,0,2,0}};

	dijkstra(graph, 0);

	return 0;
}
