#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int h, v;
    cin >> h >> v;
    cout << (int) ceil(h / sin(v * 1.0 / 180 * M_PI)) << endl;
}