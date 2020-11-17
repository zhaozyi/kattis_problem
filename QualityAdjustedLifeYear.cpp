#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        sum += a * b;
    }
    printf("%.3f\n", sum);
}