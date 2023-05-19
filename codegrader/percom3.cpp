#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > combinations;

void generateCombinations(int n, int k, vector<int>& current, int start) {
    if (current.size() == k) {
        combinations.push_back(current);
        return;
    }

    for (int i = start; i <= n; i++) {
        current.push_back(i);
        generateCombinations(n, k, current, i+1);
        current.pop_back();
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> current;
    generateCombinations(n, k, current, 1);

    sort(combinations.begin(), combinations.end());

    for (auto comb : combinations) {
        for (int i = 0; i < k; i++) {
            cout << comb[i] << " ";
        }
        cout << endl;
    }

    cout<<combinations.size()<<endl;

    return 0;
}

