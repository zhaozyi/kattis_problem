#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
struct point
{
    /* data */
    int x;
    int y;
};


int main() {
    point p1, p2, p3;
    vector<point> v;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    int minX = min(min(p1.x, p2.x), p3.x);
    int minY = min(min(p1.y, p2.y), p3.y);
    int maxX = max(max(p1.x, p2.x), p3.x);
    int maxY = max(max(p1.y, p2.y), p3.y);
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    for (int i = 0; i < 3; ++i) {
        if (v[i].x == minX) {
            ++t1;
        }
        if (v[i].x == maxX) {
            ++t2;
        }
        if (v[i].y == minY) {
            ++t3;
        }
        if (v[i].y == maxY) {
            ++t4;
        }
    }
    if (t1 == 2 && t3 == 2 && t2 == 1 && t4 == 1) {
        cout << maxX << " " << maxY << endl;
    }
    if (t1 == 2 && t3 == 1 && t2 == 1 && t4 == 2) {
        cout << maxX << " " << minY << endl;
    }
    if (t1 == 1 && t3 == 2 && t2 == 2 && t4 == 1) {
        cout << minX << " " << maxY << endl;
    }
    if (t1 == 1 && t3 == 1 && t2 == 2 && t4 == 2) {
        cout << minX << " " << minY << endl;
    }
}