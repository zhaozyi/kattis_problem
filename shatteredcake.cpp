#include <iostream>

using namespace std;

int main() {
    int w, n, x = 0;
    cin >> w >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        x += a * b;
    }
    cout << x / w << endl;
}