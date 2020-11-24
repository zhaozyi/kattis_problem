#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        double v0, theta, x1, h1, h2;
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        double t = x1 / cos(theta / 180 * M_PI) / v0;
        double h = v0 * t * sin(theta / 180 * M_PI) - 0.5 * 9.81 * t * t;
        if (h + 1 > h2 || h - 1 < h1)
            cout << "Not Safe" << endl;
        else 
            cout << "Safe" << endl;
    }
}