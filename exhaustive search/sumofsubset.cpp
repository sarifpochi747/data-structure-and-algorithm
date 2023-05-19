#include<iostream>
using namespace std;

int n = 6;
int m = 30;
int w[] = {5,10,12,13,15,18};
int x[100];

void print(int k)
{
    for(int i=0;i<=k;i++)
    {
        if(x[i] == 1)
        {
            cout<<w[i]<<" ";
        }
    }
    cout<<"\n";
}
void sumofsubset_bt(int sum ,int k,int r)
{
    //generate left child
    x[k] = 1;
    if(sum + w[k] == m)
    {
        for(int i=0;i<=k;i++)
        {
        	cout<<x[i];
		}
		cout<<" ";
		print(k);
    }
    else if(sum +w[k] + w[k+1] <= m) 
    {
        sumofsubset_bt(sum+w[k] ,k+1,r-w[k]);
    }
    
    //generate right child
    if((sum + r-w[k] >= m) && (sum + w[k+1] <= m) )
    {
        x[k] = 0;
        sumofsubset_bt(sum,k+1,r-w[k]);
    }

}

int main()
{
    int r=0;
    for(int i=0;i<n;i++)
    {
        r+=w[i];
    }
    //cout<<r;
    sumofsubset_bt(0,0,r);
}
