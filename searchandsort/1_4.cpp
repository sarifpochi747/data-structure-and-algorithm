#include<iostream>
using namespace std;

int main()
{
    int count = 1;
    int a[] = {-1,0,2,1,-3};
    int n = 5;
    for(int i=0;i<n;i++)
    {  
        cout<<a[i]<<" ";
        for(int j=i+1;j<n;j++)
        {
            count +=1;
            cout<<a[j]<<" ";
            if(count == 3)
            {
                count = 1;
                cout<<"\n";
            }
        }
    }
}