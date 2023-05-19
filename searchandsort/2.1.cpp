#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int b[100];
    int i = l;
    int j = m+1;
    int k = l;
    while(i<=m && j<=r)
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

void partition(int a[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        partition(a,l,m);
        partition(a,m+1,r);
        merge(a,l,m,r);
    }
}

void v_shape(int a[],int n)
{
	for(int i=n-1;i>n/2;i--)
	{
		cout<<a[i]<<" ";
	}
	
	for(int i=0;i<=n/2;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}


int main()
{
	int x;
    int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	//merge sort
	partition(a,0,n-1);
	if(x == 1)
	{
		v_shape(a,n);
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2 ==0)
			{
				cout<<a[i]<<" ";
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]%2 !=0)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
	}
	
	
}
