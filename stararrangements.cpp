#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for (int i = 2; i <= n / 2 + 1; ++i) {
        // visible appealing can be achieved if the total number of stars mod the sum of stars in first row
        // and the stars in second row is 0 or the first row of stars(this means there is another row of stars
        // at the end of the flag). Remember that visible appealing can also be achieved if every row has the same
        // number of stars.
        if (n % (i + i - 1) == i || n % (i + i - 1) == 0)
            cout << i << "," << i - 1 << endl; 
        if (n % i == 0)
            cout << i << "," << i << endl;
    }
}