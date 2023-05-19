#include<iostream>
using namespace std;


void merge(int a[],int l,int m,int r)
{
	int b[1000]; // temp array
	int i= l; // start for part 1;
	int j = m+1; // start for part 2;
	int k = l; // index temp array
	while(i<= m && j<= r)
	{
		if(a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
			
		}
		else
		{
			b[k] = a[j];
			j++;
		}
		k++;
	}
	
	while(j<= r)
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

void merge_divide(int a[],int l,int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		merge_divide(a,l,m);
		for(int i=l;i<=r;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		merge_divide(a,m+1,r);
		for(int i=l;i<=r;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		merge(a,l,m,r);
		for(int i=l;i<=r;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	
	int a[] = {15,5,24,8,1,3,16,10,20};
	int n=sizeof(a)/sizeof(a[0]);
	merge_divide(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
}
