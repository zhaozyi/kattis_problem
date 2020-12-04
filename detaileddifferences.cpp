#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << s1 << endl;
        cout << s2 << endl;
        for (int j = 0; j < s1.size(); ++j) {
            if (s1.at(j) == s2.at(j)) {
                cout << ".";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}