#include <bits/stdc++.h>
using namespace std;

struct pt {
    double x, y, z;
};

int main() {
    int n;
    cin >> n;
    pt a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }

    double _max = -1;
    double _min = 1e8;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            double dx = pow(a[i].x - a[j].x, 2);
            double dy = pow(a[i].y - a[j].y, 2);
            double dz = pow(a[i].z - a[j].z, 2);
            double dist = sqrt(dx+dy+dz);
            _min = min(_min, dist);
            _max = max(_max, dist);
        }
    }
    cout << fixed << setprecision(2) << _min << ' ' << _max;
    return 0;
}
