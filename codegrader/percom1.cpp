#include<iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	char s;
    string str;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		str += s;
	}
	
    // Sort the string in lexicographically ascending order
    sort(str.begin(), str.end());

    do {
        // Print the current permutation
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    return 0;
}

