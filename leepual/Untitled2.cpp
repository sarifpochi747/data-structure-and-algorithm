#include<iostream>
using namespace std;


void check(int a[],int n)
{
	int sum_count = 0;
	int temp[1000]= {0};
	for(int i=0;i<n;i++)
	{
		temp[a[i]] ++;
	}
	for(int i=0;i<1000;i++)
	{
		if(temp[i] == 1)
		{
			sum_count ++;
			cout<<i<<" ";
		}
	}
	if(sum_count == 0)
	{
		cout<<0;
	}
	cout<<"\n";
}

int main()
{
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	check(a,n);
}

