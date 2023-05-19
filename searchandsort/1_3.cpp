#include <iostream>
using namespace std;

void quicksort(int a[],int l,int r)
{
	int pivot  = a[(l+r)/2];
	int i=l;
	int j = r;
	while(i<=j)
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
			a[i]  = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		
	}
	
	if(l < j)
	{
		quicksort(a,l,j);
		
	}
	if(r> i)
	{
		quicksort(a,i,r);
	}
	
}

int main()
{
	int sum = 0;
	int a[1000] ;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	quicksort(a,0,n-1);
	int i = 0;
	int j =1;
	while(i < n)
	{
		if(a[i] != a[j])
		{
			sum += a[i];
			i = j;
			j+=1;
			//cout<<sum<<" ";
		}
		else
		{
			j++;
			
		}
	}
	cout<<sum;
}

