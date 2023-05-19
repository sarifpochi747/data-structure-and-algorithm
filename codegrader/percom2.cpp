#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permutations;

void generatePermutations(vector<int>& nums, int k, vector<int>& current, vector<bool>& used) {
    if (current.size() == k) {
        permutations.push_back(current);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        current.push_back(nums[i]);
        used[i] = true;
        generatePermutations(nums, k, current, used);
        current.pop_back();
        used[i] = false;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        nums[i] = i+1;
    }

    vector<int> current;
    vector<bool> used(n, false);
    generatePermutations(nums, k, current, used);

    for (auto perm : permutations) {
        for (int i = 0; i < k; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }

    cout << permutations.size() << endl;

    return 0;
}

