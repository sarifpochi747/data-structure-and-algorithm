#include<iostream>
#include <string>
using namespace std;


int k=0;
string s[1000];
void permutation(char a[],int l,int r)
{
	if(l==r)
	{
		s[k] = a;
		k++;
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(a[i],a[l]);
			permutation(a,l+1,r);
			swap(a[i],a[l]);
		}
	}
}

int main()
{
    char a[] = "CBA";

    permutation(a,0,2);
    for(int i=0;i<k;i++)
    {
    	cout<<s[i]<<"\n";
	}
}
