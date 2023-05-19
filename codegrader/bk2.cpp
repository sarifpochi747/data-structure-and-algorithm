#include<iostream>

using namespace std;

int n;
int h;
char a[1000];
int count =0;
void check()
{
	int c = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == '1')
		{
			c++;
		}
	}
	if(c==h)
	{
		count++;
	}
}


void subset(int l,int r)
{
	if(l==r)
	{
		check();
	}
	else
	{
		a[l] = '1';
		subset(l+1,r);
		a[l] = '0';
		subset(l+1,r);
	}
}


int main()
{
	cin>>n;
	cin>>h;
	if(n==h)
	{
		cout<<1;
	}
	else
	{
		subset(0,n);
		cout<<count;
	}
	
}
