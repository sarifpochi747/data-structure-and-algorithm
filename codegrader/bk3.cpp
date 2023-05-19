#include <bits/stdc++.h>
using namespace std;

const int MAXN = 25;

int n;
int circle[MAXN];
bool isPrime[1000005];

bool isCircularPrime() {
    for (int i = 0; i < n; i++) {
        int num = 0;
        for (int j = i; j < i + n; j++) {
            num = num * 10 + circle[j % n];
        }
        if (!isPrime[num]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Generate all prime numbers up to 1 million using the Sieve of Eratosthenes
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 1000000; i++) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= 1000000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Input
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> circle[i];
    }

    // Count the number of circular prime numbers
    int cnt = 0;
    sort(circle, circle + n);
    do {
        if (isCircularPrime()) {
            cnt++;
        }
    } while (next_permutation(circle, circle + n));

    // Output the result
    cout << cnt << endl;

    return 0;
}


