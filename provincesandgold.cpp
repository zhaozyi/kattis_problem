#include <iostream>

using namespace std;

int main() {
    int g, s, c;

    cin >> g >> s >> c;
    int total = g * 3 + s * 2 + c * 1;
    if (total < 2) {
        cout << "copper" << endl;
    } else if (total < 3) {
        cout << "Estate or copper" << endl;
    } else if (total < 5) {
        cout << "Estate or silver" << endl;
    } else if (total < 6) {
        cout << "Duchy or silver" << endl;
    } else if (total < 8) {
        cout << "Duchy or gold" << endl;
    } else {
        cout << "Province or gold" << endl;
    }
}