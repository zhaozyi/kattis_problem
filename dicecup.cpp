#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int m = min(a, b);
    int n = max(a, b);
    for (int i = m + 1; i <= n + 1; ++i)
        cout << i << endl;
}