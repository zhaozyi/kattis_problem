#include <iostream>

using namespace std;
int getSumDigit(int n);

int main() {
    int n;
    cin >> n;
    int i;
    for (i = n; i % getSumDigit(i) != 0; ++i);
    cout << i << endl;
}

int getSumDigit(int n) {
    int result = 0;
    while (n != 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

