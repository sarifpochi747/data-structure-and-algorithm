#include<iostream>
#include<string>
using namespace std;
int a[10000];


void selection_sort(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<"\n";
		int min  = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		swap(a[i] , a[min]);
	}
	for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
}

int main()
{
	string s;
	int num,j;
	j = 0;
	while(1)
	{
		cin>>s;
		if(s == "s")
		{
			selection_sort(j);
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
