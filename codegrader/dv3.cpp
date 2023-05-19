#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    string result = "";
    int length = numbers[0].length();
    for (int i = 1; i <= length; i++) {
        string substr = numbers[0].substr(0, i);
        bool common = true;
        for (int j = 1; j < n; j++) {
            if (numbers[j].find(substr) != 0) {
                common = false;
                break;
            }
        }
        if (common) {
            result = substr;
        } else {
            break;
        }
    }

    cout << result << endl;

    return 0;
}

