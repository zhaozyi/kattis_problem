#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s, t, n;
    cin >> s >> t >> n;
    vector<int> d, b, c;
    int result = s;
    for (int i = 0; i < n + 1; ++i) {
        int r;
        cin >> r;
        d.push_back(r);
    }
    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;
        b.push_back(r);
    }

    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;
        c.push_back(r);
    }

    for (decltype(d.size()) i = 0; i < d.size() - 1; ++i) {
        int tmp = result + d.at(i);
        if (tmp <= c.at(i))
            result = c.at(i);
        else 
            result += c.at(i) - (tmp % c.at(i));
            
        result += b.at(i);
    }
    result += d.at(d.size() - 1);

    if (result > t)
        cout << "no" << endl;
    else 
        cout << "yes" << endl;
}