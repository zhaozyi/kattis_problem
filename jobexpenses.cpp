#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num < 0) {
            r += (num) * (-1);
        } 
    }
    cout << r << endl;
}