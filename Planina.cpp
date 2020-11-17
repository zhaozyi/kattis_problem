#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    long result = 4;
    for (int i = 1; i <= n; i++) {
        result += 2 * pow(2, i - 1) * (pow(2, i) + 1) - pow(4, i - 1);
    }
    cout << result << endl;
}