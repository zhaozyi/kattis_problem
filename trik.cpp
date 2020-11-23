#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    int r = 1;
    for (auto it = line.begin(); it != line.end(); ++it) {
        if (r == 1 && *it == 'A') {
            ++r;
        } else if (r == 1 && *it == 'C') {
            r += 2;
        } else if (r == 2 && *it == 'A') {
            --r;
        } else if (r == 2 && *it == 'B') {
            ++r;
        } else if (r == 3 && *it == 'B') {
            --r;
        } else if (r == 3 && *it =='C') {
            r -= 2;
        }
    }
    cout << r << endl;
}
