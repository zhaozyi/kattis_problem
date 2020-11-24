#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        if (s.substr(0, 11) == "Simon says ")
            cout << s.substr(11, s.size() - 11) << endl;
    }
}