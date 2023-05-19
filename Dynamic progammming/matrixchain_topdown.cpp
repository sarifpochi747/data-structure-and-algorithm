#include<bits/stdc++.h>
using namespace std;

#define int_max 5000
#define n  4
int dp[n][n]; 
int d[] = {10,100,5,50,1};
int matrixChain(int i,int j)
{
	//base case
	if( i== j)
	{
		return 0;
	}

	// checking existing answer
	if(dp[i][j] != -1)
	{
		return dp[i][j];
	}
	
	
	int min_cost  = INT_MAX;
	for(int k=i;k<j;k++)
	{
		int cost = matrixChain(i,k) + matrixChain(k+1,j) + d[i-1]*d[k]*d[j];
		min_cost = min(cost,min_cost);
	}
	dp[i][j] = min_cost;
	cout<<i<<":"<<j<<" "<<min_cost<<"\n";
	
	return min_cost;
}


int main()
{

	//initial dp
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			dp[i][j] = -1;
		}
	}

	cout<<matrixChain(1,n)<<"\n";
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=	n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
