#include<iostream>
using namespace std;

void quicksort_Median(int a[],int l,int r)
{
	int i=l;
	int j = r;
	int m = (l+r)/2;
	//a[m] < a[i] < a[j] || a[j] < a[i] < a[m]
	if(a[m] < a[i] && a[i] < a[j] || a[j] < a[i] && a[i] < a[m] )
	{
		int temp = a[i];
		a[i] = a[m];
		a[m] = temp;
	}
	// a[m] < a[j] < a[i] || a[i] < a[j] < a[m]
	else if( a[m] < a[j] && a[j] < a[i] || a[i] < a[j] && a[j]< a[m])
	{
		int temp = a[j];
		a[j] = a[m];
		a[m] = temp;
	}
	
	// median is a[m];
	int pivot = a[m];
	while(i<= j)
	{
		while(a[i] < pivot)
		{
			i++;
		}
		while(a[j] > pivot)
		{
			j--;
		}
		if(i<=j)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j]  = temp;
			i++;
			j--;
		}
	}
	
	
	if(l < j)
	{
		quicksort_Median(a,l,j);
	}
	if(r> j)
	{
		quicksort_Median(a,i,r);
	}
	
}

int main()
{
	int n;
	cin>> n ;
	int a[2*n];

	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
	}
	quicksort_Median(a,0,2*n);
	if((2*n) %2==0)
	{
		int m = (a[(2*n)/2 -1] + a[(2*n)/2])/2;	 
		cout<<m;
	}
	else
	{
		int m = a[(2*n)/2];
		cout<<m;
	}
	
}
