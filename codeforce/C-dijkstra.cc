#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define pii pair<long long, long long>
#define st first
#define nd second

int main() {
    int n, m;
    cin >> n >> m;
    vector<pii> g[n+1];
    for (int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        g[u].emplace_back(w, v);
        g[v].emplace_back(w, u);
    }

    long long dist[n+1];
    int prnt[n+1];
    prnt[1] = -1;

    fill(dist, dist+n+1, 1e9);
    dist[1] = 0;

    priority_queue<pii> pq;

    pq.emplace(0, 1);

    while (!pq.empty()) {
        long long u = pq.top().nd;
        long long du = -pq.top().st;
        pq.pop();

        if (dist[u] != du) continue;

        for (auto x : g[u]) {
            long long v = x.nd;
            long long wv = x.st;
            if (dist[v] > du + wv) {
                dist[v] = du + wv;
                prnt[v] = u;
                pq.emplace(-dist[v], v);
            }
        }
    }

    if (dist[n] == 1e9) cout << -1;

    else {
        stack<int> st;

        int path = n;
        do {
            st.push(n);
            n = prnt[n];
        } while (n != -1);

        while (!st.empty()) {
            cout << st.top() << ' ';
            st.pop();
        }
    }
    return 0;
}
