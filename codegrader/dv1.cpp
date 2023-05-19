#include<iostream>
#include<math.h>
using namespace std;

int xl = 0;
int xr = 1000000;
int er = 0.0001;
int xm;
int xs;
int xsold = xr;
int m,n;

int cal(int x)
{
	for(int i=0;i<n;i++)
	{
		x = x*x;	
		cout<<x<<" ";
	}
	return (x-m);
}

int main()
{

	m=38;
	n = 4;
	if(cal(xl)*cal(xr) < 0)
	{
		
		do
		{
			xsold = xr;
			xm = (xr+xl)/2;
			if(cal(xm)*cal(xr) == 0)
			{
				xs = xm;
				cout<<xs;
			}
			else if(cal(xm)*cal(xr) > 0)
			{
				xr = xm;
			}
			else
			{
				xl = xm;
			}
			xs = xm;
			
			
		}while(abs((xs -xsold)/xs) > er);
	}
	
}
