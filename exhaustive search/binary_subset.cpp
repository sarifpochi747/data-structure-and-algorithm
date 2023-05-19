#include<iostream>
using namespace std;
int x[] = {1,2,3};

void print(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<x[i];
        }
    }
    cout<<"\n";
}

void subset(int a[],int l,int r)
{
    if(l==r)
    {
        print(a,r);
    }
    else
    {
        a[l+1] = 1;
        subset(a,l+1,r);
        a[l+1] = 0;
        subset(a,l+1,r);
    }
}


int main()
{
    int a[100];
    subset(a,-1,2);
}