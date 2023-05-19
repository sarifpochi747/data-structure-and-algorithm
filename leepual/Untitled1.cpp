#include<iostream>
using namespace std;

void check(int a[],int n)
{
	int max1 = a[0];
	int max2 = 1;
	int count  = 1;
	for(int i=0;i<n;i++)
	{
		if(a[i] == a[i+1])
		{
			count++;
			if(count > max2)
			{
				max1 = a[i];
				max2 = count;
			}
		}
		else
		{
			count = 1;
		}
		
	}
	cout<<max1<<" "<<max2<<"\n";
}

int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	check(a,n);
}
