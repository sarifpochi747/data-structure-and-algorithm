#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string c;
        cin >> c;
        str += c;
    }
    int j=0;
    int k=1;
    cout<<str<<"\n";
    for(int i=0;i<str.length();i++)
    {
        if(str[j] != str[k])
        {
            cout<<str[j]<<"";
            j = k;
            k +=1;
        }
        else
        {
            k++;    
        }
    }

    



}