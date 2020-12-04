#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int total = 0;
    for (int i = 1; i < b; ++i) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            total += 31;
        } else if (i == 2) {
            total += 28;
        } else {
            total += 30;
        }
    }
    total += a - 1;
    int mod = (total + 4) % 7;
    if (mod == 0) {
        cout << "Sunday" << endl;
    } else if (mod == 1) {
        cout << "Monday" << endl;
    } else if (mod == 2) {
        cout << "Tuesday" << endl;
    } else if (mod == 3) {
        cout << "Wednesday" << endl;
    } else if (mod == 4) {
        cout << "Thursday" << endl;
    } else if (mod == 5) {
        cout << "Friday" << endl;
    } else if (mod == 6) {
        cout << "Saturday" << endl;
    }
}