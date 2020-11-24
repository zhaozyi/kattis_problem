#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int f, s, result = 0;
        cin >> f;
        while (cin >> s && s != 0) {
            result += s >= f * 2 ? s - f * 2 : 0;
            f = s;
        }
        cout << result << endl;
    }
}