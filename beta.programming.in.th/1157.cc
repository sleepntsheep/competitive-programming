#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> dp;
vector<int> c;
void slv(int s, int csf) {
    if (dp[s] <= csf+c[s])
        return;
    dp[s] = csf + c[s];
    if (s == n) return;

    for (int i = 1; i <= k && s + i <= n; i++)
        slv(s+i, csf+c[s]);
}

int main() {
    cin >> n >> k;
    dp.reserve(n+1);
    c.reserve(n+1);
    for (int i = 1,a; i <= n; i++)
        cin >> c[i], dp[i] = INT_MAX;

    slv(1, 0);

    cout << dp[n];
}
