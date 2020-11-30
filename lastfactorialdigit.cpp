#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 0 || a == 1) {
            cout << 1 << endl;
        } else if (a == 2) {
            cout << 2 << endl;
        } else if (a == 3) {
            cout << 6 << endl;
        } else if (a == 4) {
            cout << 4 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}