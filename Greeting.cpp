#include <iostream>

using namespace std;

int main() {
    string s, str = "";
    cin >> s;
    int n = (s.size() - 2) * 2;
    str += 'h';
    for (int i = 0; i < n; ++i)
        str += 'e';
    str += 'y';
    cout << str << endl;
}