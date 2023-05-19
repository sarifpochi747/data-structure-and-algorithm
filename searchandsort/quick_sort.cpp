#include<iostream>
using namespace std;


void quicksort_mid(int a[],int l,int r)
{
	int pivot = a[ (l+r)/2 ];
	int i = l;
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
			//SWAP	
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if(l < j)
	{
		quicksort_mid(a,l,j);
	}
	if(r>i)
	{
		quicksort_mid(a,i,r);
	}
}


void quicksort_left(int a[],int l,int r)
{
	int pivot = a[l];
	int i = i+1;
	int j = r;
	while(i<=j)
	{
		while(a[i] < pivot )
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
			a[j] = temp;
			i++;
			j--;
		}
	}
	for(int t=l;t<j;t++)
	{
		int temp = a[t];
		a[t]  = a[t+1];
		a[t+1] = temp;
	}
	
	
	if(l < j)
	{
		quicksort_left(a,l,j);
	}
	if(r> i)
	{
		quicksort_left(a,i,r);
	}
}

void quicksort_right(int a[],int l,int r)
{
	int pivot = a[r];
	int i =l;
	int j = r-1;
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
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	for(int k=r;k>i;k--)
	{
		int temp = a[k];
		a[k] = a[k-1];
		a[k-1] = temp;
	}
	
	
	if(l<j)
	{
		quicksort_right(a,l,j);
	}
	if(r> i)
	{
		quicksort_right(a,i,r);
	}
	
}

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
	int a[] = {54,26,93,17,77,31,44,55,20};
	int size = sizeof(a)/sizeof(a[0]);
	quicksort_mid(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	quicksort_left(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	quicksort_right(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	quicksort_Median(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";

	
	
}
