#include<iostream>
#include<string>
using namespace std;
int a[10000];

void insertion_sort(int n)
{

	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<"\n";
		for(int j=i;j >= 0;j--)
		{
			if(a[j] > a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main()
{
	string s;
	int num,j,i;
	j =0;
	while(1)
	{
		cin>>s;
		if(s == "i")
		{
			insertion_sort(j);
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


