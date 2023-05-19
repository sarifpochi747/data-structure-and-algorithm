#include<iostream>
#include<math.h>
using namespace std;

int x[100];

bool check(int k,int i)
{
	for(int j=0;j<k;j++)
	{
		if(x[j] == i|| abs(x[j] - i) == abs(j - k))
		{
			return false;
		}
	}
	return true;
}

void NQueen(int k,int n)
{
	if(k==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<"\n";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(check(k,i)){
				x[k] = i;
				NQueen(k+1,n);
			}
			
		}
	}
}
int main() {
  int n =4;
  NQueen(0,n);
  
}
