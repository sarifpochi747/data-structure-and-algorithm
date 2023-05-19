#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int>& a, int left, int mid, int right) {
    vector<int> tmp(right - left + 1);
    long long count = 0;
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
            count += mid - i + 1;
        }
    }

    while (i <= mid) {
        tmp[k++] = a[i++];
    }

    while (j <= right) {
        tmp[k++] = a[j++];
    }

    for (int i = 0; i < k; i++) {
        a[left + i] = tmp[i];
    }

    return count;
}

long long mergeSort(vector<int>& a, int left, int right) {
    if (left >= right) {
        return 0;
    }

    int mid = (left + right) / 2;
    long long count = 0;

    count += mergeSort(a, left, mid);
    count += mergeSort(a, mid + 1, right);
    count += merge(a, left, mid, right);

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long count = mergeSort(a, 0, n - 1);

    cout << count << endl;

    return 0;
}

