#include <iostream>

using namespace std;
int sumDigit(int n);

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    int i = l, j = d;
    while (i <= d && sumDigit(i) != x) ++i;
    while (j >= l && sumDigit(j) != x) --j;
    cout << i << endl;
    cout << j << endl;
}

int sumDigit(int n) {
    int result = 0;
    while (n != 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}