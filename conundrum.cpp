#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int result = 0;
    for (int i = 0; i < s.size(); i += 3) {
        if (s.at(i) != 'P') {
            ++result;
        }
        if (s.at(i + 1) != 'E') {
            ++result;
        }
        if (s.at(i + 2) != 'R') {
            ++result;
        }
    }
    cout << result << endl;
}