#include <iostream>

using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (m < 45) {
        m = 60 - (45 - m);
        if (h == 0) {
            h = 23;
        } else {
            --h;
        }
    } else {
        m -= 45;
    }
    cout << h << " " << m << endl;
}