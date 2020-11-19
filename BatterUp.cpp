#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double result = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        result += j == -1 ? 0 : j;
        c += j == -1 ? 0 : 1;
    }
    cout << result / c << endl;
}