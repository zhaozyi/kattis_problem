#include <iostream>

using namespace std;

int main() {
    int a[13] = {0};
    for (int i = 0; i < 5; ++i) {
        string s;
        cin >> s;
        char c = s.at(0);
        if (c == 'A') {
            a[0]++;
        } else if (c == 'T') {
            a[9]++;
        } else if (c == 'J') {
            a[10]++;
        } else if (c == 'Q') {
            a[11]++;
        } else if (c == 'K') {
            a[12]++;
        } else {
            a[c - '0']++;
        }
    }
    int max = 0;
    for (int i = 0; i < 13; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << max << endl; 
}