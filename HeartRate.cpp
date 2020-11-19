#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b;
        double p;
        cin >> b >> p;
        double avg = 60 * b / p;
        double diff = avg / b;
        printf("%.4f %.4f %.4f\n", avg - diff, avg, avg + diff);
    }
}