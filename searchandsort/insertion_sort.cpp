#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
}


int main()
{
	int a[] = {3,1,8,7,6};
	int n = sizeof(a)/sizeof(a[0]);
	insertion_sort(a,n);
}
