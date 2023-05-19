#include<iostream>
#include<string>
using namespace std;


void bubble_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
void binary_search(int a[],int l,int r,int t)
{
	int m= (l+r)/2;
	if(l<= r)
	{
		cout<<l<<","<<m<<","<<r<<" ";
		if(a[m] == t)
		{
			cout<<"Yes"<<"\n";
			return;
		}
		else if(a[m] > t)
		{
			binary_search(a,l,m-1,t);
		}
		else
		{
			binary_search(a,m+1,r,t);
		}
	}
	else
	{
		cout<<"No"<<"\n";
	}
	
}

int main()
{
	string s;
	int num;
	int a[10000];
	int b[10000];
	int j=0;
	while(1)
	{
		cin>>s;
		if(s == "s")
		{
			int x;
			cin>>x;
			for(int i=0;i<j;i++)
			{
				b[i]=a[i];
			}
			bubble_sort(b,j);
			binary_search(b,0,j-1,x);
		}
		else if(s=="p")
		{
			for(int i=0;i<j;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<"\n";
		}
		else if(s == "o")
		{
			break;
		}
		else
		{
			int c = sscanf(s.c_str(),"%d",&num);
			a[j] = num;
			j++;
		}
		
	}
}
