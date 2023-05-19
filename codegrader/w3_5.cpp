#include<iostream>
#include<string>
using namespace std;

int a[10000];

void quick_sort(int l,int r,int n)
{
	int i=l;
	int j = r;
	int pivot = a[(l+r)/2];
	while(i<=j)
	{
		while( a[i] < pivot)
		{
			i++;
		}
		while(a[j] > pivot)
		{
			j--;
		}
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	if(l<j)
	{
		quick_sort(l,j,n);
	}
	if(r>i)
	{
		quick_sort(i,r,n);
	}
}

int main()
{
	string s;
	int num,j,i;
	j=0;
	while(1)
	{
		cin>>s;
		if(s == "q")
		{
			for(int i=0;i<j;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<"\n";
			quick_sort(0,j-1,j);

			break;
		}
		else
		{
			i = sscanf(s.c_str(),"%d",&num);
			a[j] = num;
			j++;
		}
	}
}
