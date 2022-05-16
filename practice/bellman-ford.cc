#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, e, s, t;
    // vertex, edge, source, dest
    cin >> v >> e >> s >> t;
    int dist[v];
    vector<pair<int, pair<int, int>>> edge;
    for (int i = 0, uu,vv,ww; i < e; i++) {
        cin >> uu >> vv >>  ww;
        edge.push_back({ww, {uu, vv}});
    }

    dist[s] = 0;

    // shortest dist
    for (int i = 0; i < v-1; i++) {
        // loop edge
        for (auto pipii: edge) {
            int uu, vv, ww;
            uu = pipii.second.first;
            vv = pipii.second.second;
            ww = pipii.first;
            dist[vv] = min(dist[vv], dist[uu] + ww);
        }
    }

    // negative weight cycle check
    for (int i = 0; i < v-1; i++) {
        // loop edge
        for (auto pipii: edge) {
            int uu, vv, ww;
            uu = pipii.second.first;
            vv = pipii.second.second;
            ww = pipii.first;
            if (dist[vv] > dist[uu] + ww) {
                cout << "Negative weight cycle";
                return 0;
            }
        }
    }

    cout << "SSSP From " << s << " to " << t << " is " << dist[t];
    return 0;
}
