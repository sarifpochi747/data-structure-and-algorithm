#include<iostream>
#include<string>
using namespace std;
int a[1000];


void merge(int l,int m,int r)
{
	int b[1000];
	int i=l;
	int j=m+1;
	int k=l;
	while(i<=m&&j<=r)
	{
		if(a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	while(j<=r)
	{
		b[k] = a[j];
		j++;
		k++;
	}
	while(i<=m)
	{
		b[k] = a[i];
		i++;
		k++;
	}
	
	for(int i=l;i<=r;i++)
	{
		a[i] = b[i];
	}
}
void merge_sort(int l,int r,int n)
{
	if(l<r)
	{
		int m = (l+r)/2;
		merge_sort(l,m,n);
		merge_sort(m+1,r,n);
		merge(l,m,r);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
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
		if(s == "m")
		{
			merge_sort(0,j-1,j);
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
