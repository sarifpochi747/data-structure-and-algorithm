#include<iostream>
#include <math.h> 
using namespace std;

float w[10000] = {18,15,10,5};
float p[10000] =  {25,24,15,8};
float ratio[10000];
float x[10000] = {0};
int capacity;


void fractional(int n)
{
	float total = 0;
	int i=0;
	while(i< n)
	{
		if(w[i] <= capacity)
		{
			x[i] = 1;
			capacity -= w[i];
			total += p[i];
			i++;
			
		}
		else 
		{
			x[i] = capacity/w[i];
			capacity -= w[i]*x[i];
			total += p[i]*x[i];
			break;
		}
	}

	cout<<ceil(total);
	cout<<"\n";
}


void quick(int l,int r)
{
	float pivot = ratio[(l+r)/2];
	int i=l;
	int j = r;
	while(i<= j)
	{
		while(ratio[i] > pivot)
		{
			i++;
		}
		while(ratio[j] < pivot)
		{
			j--;
		}
		if(i<=j)
		{
			swap(w[i],w[j]);
			swap(p[i],p[j]);
			swap(ratio[i],ratio[j]);
			i++;
			j--;
		}
	}
	if(l<j)
	{
		quick(l,j);
	}
	if(r>i)
	{
		quick(i,r);
	}
}

int main()
{
	int n = 4;
	capacity  = 25;
	for(int i=0;i<n;i++)
	{
		ratio[i] = p[i]/w[i];
	}
	quick(0,n-1);
	fractional(n);
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	
	
	
}
