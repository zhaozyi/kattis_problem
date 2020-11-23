#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;
        if (r < 0) ++count;
    }
    cout << count << endl;
}