#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int max = 0, min = 100;
        for (int i = 0; i < a; ++i) {
            int d;
            cin >> d;
            if (max < d) {
                max = d;
            }
            if (min > d) {
                min = d;
            }
        }
        cout << (max - min) * 2 << endl;
    }
}