#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, max = 12;
    unordered_set<string> set;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s1, s2;
        cin >> s1 >> s2;
        if (max != 0 && set.find(s1) == set.end()) {
            cout << s1 << " " << s2 << endl;
            set.insert(s1);
            --max;
        }
    }
}