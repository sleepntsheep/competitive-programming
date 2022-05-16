#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,P,U,e;
    cin >> n >> P >> U >> e;
    vector<pair<int, int>> g[n];
    for (int i = 0, u, v, w; i < e; i++) {
        cin >> u >> v >> w;
        g[u].push_back({w, v});
    }
    int L;
    cin >> L;
    int H[L];
    for (int i = 0; i < L; i++)
        cin >> H[i];

    int dist[n];
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < L; i++) {
        fill(dist, dist+n, 1e9);
        dist[P] = 0;
        pq.push({0, P});

        while (!pq.empty()) {
            int w = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (dist[u] != w) continue;

            for (int i = 0; i < g[u].size(); i++) {
                int ww = g[u][i].first + ((u == P) * H[i]);
                int vv = g[u][i].second;

                if (dist[u] + ww < dist[vv]) {
                    dist[vv] = dist[u] + ww;
                    pq.push({dist[vv], vv});
                }
            }
        }

        cout <<  dist[U] << ' ';
    }
    return 0;
}
