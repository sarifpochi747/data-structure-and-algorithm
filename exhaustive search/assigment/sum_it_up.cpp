#include<iostream>
using namespace std;
int count =0;
void subset(int a[],int n,int i,int b[],int k,int value)
{
    int sum = 0;
    if(n==i)
    {   
        for(int i=0;i<k;i++)
        {
            sum+=b[i];
        }
        if(sum == value)
        {   
            count++;
        }
    }
    else
    {
        b[k] = a[i];
        subset(a,n,i+1,b,k+1,value);
        subset(a,n,i+1,b,k,value);
    }

}



int main()
{
    int n;
    int b[100];
    int value;
    int a[12];
    cin >> value;
    cin >> n;
    for(int i=0;i<n;i++ )
    {
        cin>>a[i];
    }
    subset(a,n,0,b,0,value);
    if(count == 0)
    {
        cout<<-1;
    }
    else
    {
        cout<<count;
    }
}

/* 12 4
    25 10 9 2
 */