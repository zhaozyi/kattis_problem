#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        set<string> s;
        int count = 0;
        for (int i = 0; i < n; ++i){
            string curr;
            cin >> curr;
            if (s.find(curr) == s.end())
                ++count;
            s.insert(curr);
        }
        cout << count << endl;
    }
}