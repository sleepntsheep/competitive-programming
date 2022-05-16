#include <bits/stdc++.h>
using namespace std;

const int mxn = 300005;

int dp[mxn];
vector<int> g[mxn];

int dfs(int n) {
    if (dp[n]) return dp[n];
    int _max = 0;
    for (int nei: g[n]) {
        if (nei > n)
            _max = max(_max, dfs(nei)+1);
    }
    return dp[n] = _max;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1,u,v; i <= n-1; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++){ 
        dfs(i);
    }

    int maxdst = 0;
    for (int i = 1; i <= n; i++)
        maxdst = max(maxdst, dp[i]);

    cout << maxdst+1;
    return 0;
}
