#include<iostream>
using namespace std;

void cal(int a,int b)
{
	int count = 0;
	while(a > 0 && b > 0)
	{
		if(a <= b)
		{
			b -= a;
			count ++;
		}
		else
		{
			a -= b;
			count++;
		}
	}
	cout<<count;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cal(a,b);
}
