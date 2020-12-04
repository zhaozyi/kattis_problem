#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<char> line(c);
    vector<vector<char>> mat(r, line);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            char ch;
            cin >> ch;
            mat[i][j] = ch;
        }
    }
    int result[5] = {0};
    for (int i = 0; i < r - 1; ++i) {
        for (int j = 0; j < c - 1; ++j) {
            int total = 0;
            if (mat[i][j] == '#' || mat[i][j+1] == '#' || mat[i+1][j] == '#' || mat[i+1][j+1] == '#') {
                continue;
            }
            if (mat[i][j] == 'X') {
                ++total;
            }
            if (mat[i][j+1] == 'X') {
                ++total;
            }
            if (mat[i+1][j] == 'X') {
                ++total;
            }
            if (mat[i+1][j+1] == 'X') {
                ++total;
            }
            result[total]++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << result[i] << endl;
    }
}