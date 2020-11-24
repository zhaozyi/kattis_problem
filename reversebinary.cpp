#include <iostream>

using namespace std;

int get_count(unsigned long n) {
    int c = 1;
    while (n / 2 != 0) {
        ++c;
        n /= 2;
    }
    return c;
}

int main() {
    unsigned long n, r = 0;
    cin >> n;
    int c = get_count(n);
    for (int i = 0; i < c; ++i) {
        int bit = (n >> i) & 1;
        int reverse = bit << (c - i - 1);
        r |= reverse;
    }
    cout << r << endl;
}