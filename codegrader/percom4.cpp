#include<iostream>
#include<math.h>
using namespace std;

int a[10000];
int x[10000];

void subset(int l,int r)
{
	if(l==r)
	{
		for(int i=r-1;i>=0;i--)
		{
			if(x[i]==1)
			{
				cout<<a[i];
			}
		}
		cout<<"\n";
	}
	else
	{
		x[l] = 0;
		subset(l+1,r);
		x[l] = 1;
		subset(l+1,r);
		
		
	}
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		a[i] = n-i;
	}
	cout<<0;
	subset(0,n);
	cout<<pow(2,n);
}
/*

if(x[i]==1)
{
	cout<<a[i];
}
*/
