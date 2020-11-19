#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool find = false;
    for (auto it = s.begin(); it != s.end() - 1; ++it) {
        if (*it == 's' && *(it + 1) == 's') {
            find = true;
            break;
        }
    }
    if (find) {
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }
    
}