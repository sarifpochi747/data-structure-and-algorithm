#include<iostream>
using namespace std;


int sequence_search(int arr[],int n,int value)
{
    for(int i=0;i<n;i++)
    {   
        if(arr[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size =10;
    int num[] = {10,7,4,2,1,9,6,3,5,0};
    cout<<sequence_search(num,size,3)<<" ";
    cout<<sequence_search(num,size,8)<<" ";
    return 0;
}