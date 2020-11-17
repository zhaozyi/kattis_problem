#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long l, h, v;
    cin >> l >> h >> v;
    long a = (l - h) * v;
    long b = (l - v) * h;
    long c = (l - h) * (l - v);
    long d = h * v;
    cout << max(max(a, b), max(c, d)) * 4 << endl;
}