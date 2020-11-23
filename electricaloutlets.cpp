#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k = 0, r = 0, result = 0;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            cin >> r;
            result += j == k - 1 ? r : r - 1;
        }
        cout << result << endl;
    }
}