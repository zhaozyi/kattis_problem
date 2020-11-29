#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int line = 0;
    for (int i = 0; i < 5; ++i) {
        int score = 0;
        for (int j = 0; j < 4; ++j) {
            int s;
            cin >> s;
            score += s;
        }
        if (max < score) {
            max = score;
            line = i;
        }
    }
    cout << line + 1 << " " << max << endl;
}