#include<iostream>
using namespace std;
int h = 6;
void check(int a[],int n)
{
	int max =0;
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(a[i] > h)
		{
			count++;
			if(count > max)
			{
				max = count;
			}
		}
		else
		{
			count = 0;
		}
	}
	cout<<max;
}
int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	check(a,n);
}
