#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]> a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
		
	}
}



int main()
{
	int a[] = {2,15,6,8,1,24,20,41,12,23};
	int n = sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
}
