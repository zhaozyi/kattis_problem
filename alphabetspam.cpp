#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int whiteSpace = 0, upper = 0, lower = 0, symbol = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == '_') {
            ++whiteSpace;
        } else if (isupper(s.at(i))) {
            ++upper;
        } else if (islower(s.at(i))) {
            ++lower;
        } else {
            ++symbol;
        }
    }
    int size = s.size();
    cout << whiteSpace * 1.0 / size << endl;
    cout << lower * 1.0 / size << endl;
    cout << upper * 1.0 / size << endl;
    cout << symbol * 1.0 / size << endl;
}