#include<iostream>
using namespace std;

void subset(int a[],int n,int i,int b[],int k)
{   int sum = 0;
    if(n== i)
    {
        for(int i=0;i<k;i++)
        {
            cout<<b[i];
        }
        cout<<" ";
    }
    else
    {
        b[k]  = a[i];
        //cout<<b[k]<<" "<<a[i]<<"\n";
        subset(a,n,i+1,b,k+1);
        subset(a,n,i+1,b,k);
    }
}
int main()
{
    int b[100];
    int a[] = {50,25, 50, 50, 25 ,50 ,50 ,25 ,25 ,50 ,25 ,25};
    int n = sizeof(a)/sizeof(a[0]);
    subset(a,n,0,b,0);
}