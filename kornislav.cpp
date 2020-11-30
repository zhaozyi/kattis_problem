#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v{a, b, c, d};
    sort(v.begin(), v.end());
    cout << v[0] * min(v[v.size() - 1], v[v.size() - 2]) << endl;
}