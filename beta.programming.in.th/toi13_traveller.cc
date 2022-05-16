#include <bits/stdc++.h>
using namespace std;

int N, M, X, Y, Z;

vector<pair<int, int>> g[10005];

int dist1[100005] = { 0 };
int dist2[100005] = { 0 };

int main () {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    cin >> N >> M >> X >> Y >> Z;

    for (int i = 0, ui, vi, wi; i < M; i++) {
        cin >> ui >> vi >> wi;
        g[ui].emplace_back(wi, vi);
        g[vi].emplace_back(wi, ui);
    }

    fill(dist1, dist1+N, 1e9);
    fill(dist2, dist2+N, 1e9);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // dist1[i]  - mindist from X to i
    dist1[X] = 0;
    pq.emplace(dist1[X], X);

    while (!pq.empty()) {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();

        if (dist1[u] != w) continue;

        for (auto x : g[u]) {
            int v = x.second;
            int wv = x.first;

            if (dist1[v] > w + wv)
                pq.emplace(dist1[v] = w + wv, v);
        }
    }

    dist2[Y] = 0;
    pq.emplace(dist2[Y], Y);

    while (!pq.empty()) {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();

        if (dist2[u] != w) continue;

        for (auto x : g[u]) {
            int v = x.second;
            int wv = x.first;

            if (dist2[v] > w + wv) {
                dist2[v] = w + wv;
                pq.emplace(dist2[v], v);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (dist1[i] > Z) continue;
        pq.emplace(dist2[i], i);
    }

    auto ap = pq.top();
    cout << ap.second << ' ' << dist1[ap.second] << ' ' << ap.first;

    return 0;
}
