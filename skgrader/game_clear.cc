#include <bits/stdc++.h>
using namespace std;

struct level {
    int lvl;
    int time;
    int dif;
};

int main() {
    int n, m, k;
    // amount of level, level edges, max time
    
    cin >> n >> m >> k;

    vector<level> adj[n];

    priority_queue<

    for (int i = 0; i < m; i++) {
        int u, v, ti, hi;
        cin >> u >> v >> ti >> hi;
        adj[u].push_back({v, ti, hi});

    }



}
