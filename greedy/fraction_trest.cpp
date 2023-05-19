#include<bits/stdc++.h>
using namespace std;


void fraction(float w[],float p[],int n,int capa,float x[])
{
	float total = 0;
	for(int i=0;i<n;i++)
	{
		if(w[i] <= capa)
		{
			x[i] = 1;
			capa -= w[i];
			total += p[i];
		}
		else
		{
			x[i] = capa/w[i];
			capa -= x[i]*w[i];
			total += x[i]*p[i];
		}
	}
	cout<<total;
}


void quick(int l,int r,float ratio[],float w[],float p[])
{
	float pi = ratio[(l+r)/2];
	int i=l;
	int j = r;

	while(i<=j)
	{
		while(ratio[i] > pi)
		{
			i++;
		}
		while(ratio[j] < pi)
		{
			j--;
		}
		if(i<=j )
		{
			swap(ratio[i],ratio[j]);
			swap(p[i],p[j]);
			swap(w[i],w[j]);
			i++;
			j--;
		}
	}
	if(l<j)
	{
		quick(l,j,ratio,w,p);
	}
	if(r>i)
	{
		quick(i,r,ratio,w,p);
	}
}

int main()
{
	float w[10000] = {18,15,10,5};
	float p[10000] =  {25,24,15,8};
	float ratio[10000];
	float x[10000] = {0};
	int n = 4;
	int m = 25;
	for(int i=0;i<n;i++)
	{
		ratio[i] = p[i]/w[i];
	}
	quick(0,n-1,ratio,w,p);
	fraction(w,p,n,m,x);
}
