#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(n, 0);
    dp[0] = coins[0];
    for (int i = 1; i < n; i++) {
        if (i == 1) {
            dp[i] = max(dp[i-1], coins[i]);
        } else {
            dp[i] = max(dp[i-1], dp[i-2] + coins[i]);
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}

