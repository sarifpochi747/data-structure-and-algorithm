#include<iostream>
using namespace std;



int main()
{
	int n;
	int size =1000;
	int a[size] ;
	for(int i=0;i<size;i++)
	{
		a[i] = 0;
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t ;
		cin>>t;
		a[t] ++;
	}
	
	for(int i= 0;i<size;i++)
	{
		if(a[i] != 0)
		{
			cout<<i<<" "<<a[i]<<"\n";
		}
	}
	
}
/*
7
1 1 2 2 5 5 5 

*/

