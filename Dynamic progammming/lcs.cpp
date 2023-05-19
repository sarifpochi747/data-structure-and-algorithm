#include<bits/stdc++.h>
using namespace std;

// l(m,n) = max(l(m-1,n),l(m,n-1))
//          1+ L(m-1,n-1) x[i] == y[i]

string x = "abcdaf";
string y = "acbcf";



// botomup

int lcs()
{
	int m = x.length();
	int n = y.length();
	int dp[m][n];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j] = 0;
			}
			else if( x[i-1] == y[j-1])
			{
				dp[i][j] = 1+ dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[m][n];
}

int main()
{

	cout<<lcs();
}
