#include<bits/stdc++.h>
using namespace std;

#define int_max 5000
#define n  5
int dp[n][n]; 
int d[] = {10,100,5,50,1};

void m()
{
	int j;
	for(int i=0;i<n;i++)
	{
		dp[i][i] = 0;
	}
	for(int l = 2;l<n;l++)
	{
		for(int i=1;i<n-l+1;i++)
		{
			j = i+l-1;
			dp[i][j] = int_max;
			for(int k=i;k<j;k++)
			{
				int cost = dp[i][k] + dp[k+1][j] + d[i-1]*d[k]*d[j];
				if (dp[i][j] > cost)
                {
                	dp[i][j] = cost;
				}
			}
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	m();
	for(int i=2;i<n;i++)
	{
		for(int j=2;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
}

