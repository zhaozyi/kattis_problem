#include <iostream>
#include <unordered_map>
#include <sstream>
int main() {
    using namespace std;
    unordered_map<string, int> p;
    string line;
    getline(cin, line);
    stringstream ss(line);
    string s;
    while (getline(ss, s, ' ')) {
        if (p.find(s) == p.end()) {
            p[s] = 1;
        } else {
            p[s]++;
        }
    }
    bool f = false;
    for (auto it : p) {
        if (it.second != 1) {
            f = true;
            break;
        }
    }
    if (f) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
}