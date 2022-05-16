#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n+2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = 0;
    a[n+1] = l;
    float _max = 0;
    for (int i = 0; i <= n; i++)
        _max = max(_max, (float)a[i+1] - a[i]);
    cout << fixed << setprecision(15) << _max;

    return 0;
}
