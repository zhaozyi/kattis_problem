#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min = INT32_MAX, d = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (min > a) {
            min = a;
            d = i;
        }
    }
    cout << d << endl;
}