#include<iostream>
#include<string.h>
using namespace std;
int sain[10];
void quick_sort(int a[],int l,int r)
{
	int pivot = a[(l+r)/2];
	int i = l;
	int j = r;
	while(i<=j)
	{
		while(a[i] < pivot)
		{
			i++;
		}
		while(a[j] > pivot)
		{
			j--;
		}
		if(i<= j)
		{
			swap(a[j],a[i]);
			i++;
			j--;
		}
	}
	if(j>l)
	{
		quick_sort(a,l,j);	
	}
	if(i<r)
	{
		quick_sort(a,i,r);
	}
}
int main()
{
	int n;
	string colour[100];
	int date[100];
	int id[100];
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin>>colour[i];
		cin>>date[i];
		cin>>id[i];
	}
	
	
}
