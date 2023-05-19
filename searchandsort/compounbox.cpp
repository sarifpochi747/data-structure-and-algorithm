#include<iostream>
using namespace std;

int check(int a[],int n)
{
	int count[100000] = {0};
	for(int i=0;i<=n;i++)
	{
		count[a[i]]++;
	}
	for(int i=0;i<100000;i++)
	{
		if(count[i] != 0 && count[i] %4 != 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,m;
	int temp[100000];
	int a[100000];
	cin>>m;
	n = 12;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		temp[i] = check(a,n-1);
	}
	for(int i=0;i<m;i++)
	{
		if(temp[i] == 1)
		{
			cout<<"Y"<<"\n";
		}
		else
		{
			cout<<"N"<<"\n";
		}
	}
	
}
