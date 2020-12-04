#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void transpose(vector<vector<char>> &v) {
    int d = v.size();
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j <= i; ++j) {
            char tmp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = tmp;
        }
    }
}

void reverse(vector<vector<char>> &v) {
    for (int i = 0; i < v.size(); ++i) {
        int left = 0;
        int right = v.size() - 1;
        while (left < right) {
            char tmp = v[i][left];
            v[i][left] = v[i][right];
            v[i][right] = tmp;
            ++left;
            --right;
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int d = sqrt(s.size());
        vector<char> m(d);
        vector<vector<char>> v(d, m);
        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < d; ++j) {
                v[i][j] = s.at(d * i + j);
            }
        }
        reverse(v);
        transpose(v);
        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < d; ++j) {
                cout << v[i][j];
            }
        }
        cout << endl;
    }
}
