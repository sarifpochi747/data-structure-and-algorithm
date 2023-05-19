#include<iostream>
using namespace std;


int main()
{
    int a[] = {45,23,53,43,18,24,8,95,101};
    int n = sizeof(a)/sizeof(a[0]);
     //deisplay
    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    cout<<"\n";
    for(int gap = n/2;gap >=1 ; gap/=2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i-=gap)
            {
                if(a[i] > a[i+gap])
                {
                    int temp = a[i];
                    a[i] = a[i+gap];
                    a[i+gap] = temp;
                }
                else
                {
                    break;
                }
            }
        }
         //deisplay
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    //deisplay
    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    cout<<"\n";
    
}