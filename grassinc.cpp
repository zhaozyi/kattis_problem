#include <iostream>

using namespace std;

int main() {
    double c, l;
    cin >> c >> l;
    double result = 0;
    for (int i = 0; i < l; ++i) {
        double w = 0, h = 0;
        cin >> w >> h;
        result += w * h * c;
    }
    printf("%.7f\n", result);
}