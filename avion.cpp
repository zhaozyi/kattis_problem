#include <iostream>

using namespace std;

int main() {
    int t = 0;
    for (int i = 1; i <= 5; ++i) {
        string s;
        cin >> s;
        if (s.find("FBI") != -1) {
            ++t;
            cout << i << endl;
        }
    }
    if (t == 0)
        cout << "HE GOT AWAY!" << endl;
}