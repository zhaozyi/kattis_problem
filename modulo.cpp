#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> s;
    int k = 0;
    for (int i = 0; i < 10; ++i) {
        int a;
        cin >> a;
        int mod = a % 42;
        if (s.find(mod) == s.end()) {
            s.insert(mod);
            ++k;
        }
    }
    cout << k << endl;
}