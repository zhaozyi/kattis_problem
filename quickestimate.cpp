#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string x;
        getline(cin, x);
        cout << x.size() << endl;
    }
}