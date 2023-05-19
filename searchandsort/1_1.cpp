#include<iostream>
using namespace std;





int main()
{
    int n;
    int arr[1000];
    int sum1=0;
    int sum2=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    cout<<sum1<<" "<<sum2;


}