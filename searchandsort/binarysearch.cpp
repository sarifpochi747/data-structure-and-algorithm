#include<iostream>
using namespace std;


int binary_search(int a[],int n,int target,int left,int right)
{
    int mid = (left + right)/2;
    
    if(left > right)
    {
        return 0;
    }
    else
    {
        if(a[mid] == target)    
        {
            return 1;
        }
        else if(a[mid] < target)
        {
            left = mid + 1;
            binary_search(a,n,target,left,right);
        }
        else
        {
            right = mid - 1;
            binary_search(a,n,target,left,right);
        }
    }
}

int main()
{
    int size = 12;
    int target = 22;
    int arr[] = {4,7,8,10,14,21,22,36,62,77,81,91};
    cout<<binary_search(arr,size,target,0,size-1)<<"\n";
    cout<<binary_search(arr,size,-4,0,size-1)<<"\n";
};
