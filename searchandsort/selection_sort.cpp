#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int a[] = {33,2,12,44,7,14};
	int n = sizeof(a)/sizeof(a[0]);
	selection_sort(a,n);
}
