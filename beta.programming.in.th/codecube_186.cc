#include <vector>
#include <iostream>
#include <string.h>

using namespace std;

#define pii pair<int, int>
#define st first
#define nd second

int dt[100001];

vector<pii> g[100001];
int d;

void dfs(int s, int ds) {
    if (dt[s])  return;
    dt[s] = ds;
    if (s == d) return;
    for (pii p : g[s])
        dfs(p.st, ds ^ p.nd);
}

int main() {
    int n,m ;
    cin>> n >> m;

    for (int i = 0, a, b, c; i < n; i++) {
        cin >> a >> b >> c;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }

    for (int i = 0, a, b; i < m; i++) {
        cin >> a >> b;
        d = b;
        dfs(a,0);
        cout << (dt[b]) << '\n';
        memset(dt, 0, sizeof dt);
    }
}
