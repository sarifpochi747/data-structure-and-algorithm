#include<iostream>
using namespace std;

class Runner
{
	public:
		int id;
		int h;
		int m;	
};

void check(Runner r[] ,int n)
{
	int id = r[0].id;
	int minH = r[0].h;
	int minM = r[0].m;
	for(int i=1;i<n;i++)
	{
		if(minH > r[i].h)
		{
			id = r[i].id;
			minH = r[i].h;
			minM = r[i].m;
		}
		else if (minH == r[i].h && minM > r[i].m)
		{
			id = r[i].id;
			minH = r[i].h;
			minM = r[i].m;
		}
	}
	cout<<id<<" "<<minH-1;
}


int main()
{
	int k,c;
	int a_k[100];
	int n;
	Runner a_n[100];
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>a_k[i];
	}
	cin>>n;
	c =0;
	for(int i=0;i<n;i++)
	{
		int id,h,m;
		cin>>id;
		cin>>h;
		cin>>m;
		for(int j=0;j<k;j++)
		{
			if(id == a_k[j] && h != -1)
			{
				a_n[c].id = id;
				a_n[c].h = h;
				a_n[c].m = m;
				c++;
 			}
		}
	}
	check(a_n,c);
}
