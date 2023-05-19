#include<iostream>
#include<string>
using namespace std;
int a[1000];
void bubble_sort(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int c=0;c<n;c++)
		{
			cout<<a[c]<<" ";
		}
		cout<<"\n";
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	string s;
	int j=0;
	int num;
	while(1)
	{
		cin>>s;
		if(s == "b")
		{
			break;
		}
		else
		{
			int x = sscanf(s.c_str(),"%d",&num);
			a[j] = num;
			j++;
		}
	}
	bubble_sort(j);
}
