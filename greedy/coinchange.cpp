#include<bits/stdc++.h>
using namespace std;

void coin_change(int coins[],int n,int value)
{
	int x[1000] = {0};
	int i,count;
	count  = 0;
	i=n-1;
	while(value >0 && i>=0)
	{
		int w = value/coins[i];
		x[i] = w;
		value -= w*coins[i];
		count += w;
		i--;	
	}
	cout<<count<<"\n";
}

void merge(int a[],int l,int m,int r)
{
	int i=l;
	int j = m+1;
	int k= l;
	int b[1000];
	while(i<=m && j<=r)
	{
		if(a[i]<a[j])
		{
			b[k] = a[i];
			k++;
			i++;
		}
		else
		{
			b[k] = a[j];
			k++;
			j++;
		}
	}
	while(i<=m)
	{
		b[k] = a[i];
		k++;
		i++;
	}
	while(j<=r)
	{
		b[k] = a[j];
		k++;
		j++;
	}
	for(int i=l;i<=r;i++)
	{
		a[i] = b[i];
	}
}

void divide_merge(int a[],int l,int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		divide_merge(a,l,m);
		divide_merge(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main()
{
	int n;
	int a[1000];
	int k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	divide_merge(a,0,n-1);
	coin_change(a,n,k);
}
