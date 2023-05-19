#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int a[] = {32, 7, 35, 19, 5, 12, 41, 36, 37, 27, 2, 46, 11, 50, 40, 16, 14, 47, 30, 17,84, 425, 836, 393, 999, 880, 772, 410, 357, 134, 897, 481, 619, 972, 565, 974, 710, 207, 976, 392};
int count_s  = 0;
int count_b  = 0;
int count_inter  = 0;
void sequence_search(int target,int n)
{
	for(int i=0;i<n;i++)
	{
		count_s++;
		if(target==a[i])
		{	
			return;
		}

	}
}
void binary_search(int target,int l,int r)
{
	count_b++;
	if(l<r)
	{
		int m = (l+r)/2;
		if(target == a[m])
		{
			return;
		}
		else if(a[m] < target)
		{
			binary_search(target,m+1,r);
		}
		else
		{
			binary_search(target,l,m-1);
		}
	}
}
 
void interpolation(int x,int n)
{
    // Find indexes of two corners
    int low = 0, high = (n - 1);
    // Since aay is sorted, an element present
    // in aay must be in range defined by corner
    
    while (low <= high && x >= a[low] && x <= a[high])
    {
		
        if (low == high)
        {
			if (a[low] == x) return;
        	return;
        }
        
        // Probing the position with keeping
        // uniform distribution in mind.
        count_inter++;
        int pos = low + (((double)(high - low) /
            (a[high] - a[low])) * (x - a[low]));
   
        // Condition of target found
        if (a[pos] == x)
            return;
        // If x is larger, x is in upper part
        if (a[pos] < x)
            low = pos + 1;
        // If x is smaller, x is in the lower part
        else
            high = pos - 1;
    }
    return;
}
 
void sort(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	int n = sizeof(a)/sizeof(a[0]);
	//sort(n);
	for(int i=0;i<n;i++)
	{
		sequence_search(a[i],n);
		binary_search(a[i],0,n-1);
		interpolation(a[i],n);
	}
	cout<<count_s<<"\n";
	cout<<count_b<<"\n";
	cout<<count_inter<<"\n";
	
}
