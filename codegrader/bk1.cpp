#include<bits/stdc++.h>
using namespace std;

int n = 6;
int m = 30;
int w[] = {5,10,12,13,15,18};
int x[100];

void sumofsubset(int sum,int k,int r)
{
	
	//success
	x[k] = 1;
	if(sum + w[k] == m)
	{
		for(int i=0;i<=k;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<"\n";
	}
	else if(sum + w[k] + w[k+1] <= m)		// generate node left node
	{
		
		sumofsubset(sum+w[k],k+1,r-w[k]);
			
	}
	if(sum + w[k+1] <= m) // generate node left node
	{
		x[k]  = 0;
		sumofsubset(sum,k+1,r-w[k]);
	}
	
}
int main()
{
	sumofsubset(0,0,73);
}
