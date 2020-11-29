#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a * b == c || a * 1.0 / b == (double) c || a - b == c || 1.0 * b / a == (double) c || b - a == c) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
}