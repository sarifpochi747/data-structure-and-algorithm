#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinSquares(int m, int n) {
    if (m > n) { // swap m and n to ensure m <= n
        swap(m, n);
    }
    
    vector<int> dp(n+1, INT_MAX); // initialize dp table
    dp[0] = 0; // base case
    
    for (int i = 1; i <= m; i++) {
        vector<int> temp(n+1, INT_MAX);
        temp[0] = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                temp[j] = 1; // paper is already a square
            } else {
                for (int k = 1; k <= j/2; k++) {
                    temp[j] = min(temp[j], dp[k] + dp[j-k]); // horizontal cut
                }
                for (int k = 1; k <= i/2; k++) {
                    temp[j] = min(temp[j], dp[k*j] + dp[(i-k)*j]); // vertical cut
                }
            }
        }
        dp = temp;
    }
    
    return dp[n];
}

int main() {
    int m, n;
    cin >> m >> n;
    int minSquares = getMinSquares(m, n);
    cout << minSquares << endl;
    return 0;
}


