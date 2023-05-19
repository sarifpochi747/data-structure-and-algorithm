#include <bits/stdc++.h>
using namespace std;
 
void SieveOfSundaram (bool marked[], int);
int Rotate(int );
int countDigits(int );
 
void circularPrime(int n)
{
	int count=1;
    int nNew = (n-2)/2;
    bool marked[nNew + 1];
    memset(marked, false, sizeof(marked));
    SieveOfSundaram(marked, nNew);
    for (int i=1; i<=nNew; i++)
    {
        if (marked[i] == true)
            continue;
        int num = 2 * i + 1;
        num = Rotate(num); // function for rotation of prime
        while (num != 2*i + 1)
        {
            if (num % 2 == 0) // check for even
                break;
            if (marked[(num - 1)/2] == false)
                num = Rotate(num);
            else
                break;
        }
        if (num == (2*i + 1))
			count++;
    }
	cout<<count;
}
 
void SieveOfSundaram(bool marked[], int nNew)
{
    for (int i=1; i<=nNew; i++)
        for (int j=i; (i + j + 2*i*j) <= nNew; j++)
            marked[i + j + 2*i*j] = true;
}
int Rotate(int n)
{
    int rem = n % 10;          // find unit place number
    rem *= pow(10, countDigits(n)); // to put unit place 
    n /= 10;                   // remove unit digit
    n += rem;                  // add first digit to rest 
    return n;
}
 
int countDigits(int n)
{
    int digit = 0;
    while (n /= 10)
        digit++;
    return digit;
}
 
int main(void)
{
    int n;
	cin>>n;
    circularPrime(n);
    return 0;
}
