#include<iostream>
using namespace std;


int Interpolation_search(int arr[],int n,int target,int left,int right)
{
    if(left < right)
    {
        int mid = left + ((right - left) * (target - arr[left])/(arr[right] - arr[left]));
        cout<<mid<<"\n";
        if(arr[mid] == target)
        {
            return 1;
        }
        else
        {
            if(arr[mid] > target)
            {
                Interpolation_search(arr,n,target,left,mid-1);
            }
            else
            {
                Interpolation_search(arr,n,target,mid+1,right);

            }
        }

    }
    
}



int main()
{
    int target = 105;
    int arr[] = {13,21,34,55,69,73,84,101};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<Interpolation_search(arr,size,target,0,size-1);

}
