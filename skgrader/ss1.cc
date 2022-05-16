#include <bits/stdc++.h>
using namespace std;

int qs[100000];
int n, k, i;

void search(int d) {
    int l = 0, r = n - 1;
    int ans = INT_MAX;
    int m;
    int c = 0;
    while (l <= r && c < 100000) {
        m = (l+r) >> 1;
        if (qs[m] > d) {
            r = m - 1;
        } else {
            ans = m;
            l = m + 1;
        }
        c++;
    }
    m = ans;
    if (d < qs[0]) m = -1;
    cout << m + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> k;;
    for (i = 0; i < n; i++)
        cin >> qs[i];
    for (i = 1; i < n; i++)
        qs[i] += qs[i-1];
    while(k--) {
        cin >> i;
        search(i);
    }

    return 0;
}
