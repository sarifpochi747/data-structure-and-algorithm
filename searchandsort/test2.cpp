#include<iostream>
using namespace std;


int main()
{
	int n;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int j=0;
	int max = 0;
	int t,count;
	count = 1;
	while(i<n)
	{
		if(a[i] == a[j])
		{
			count ++;
			j++;
			if(count > max)
			{
				max = count;
				t = a[i];
				cout<<t;
			}
		}
		else
		{
			count = 1;
			i = j;
			j++;
		}
		
	}
	cout<<max<<" "<<t;
}
