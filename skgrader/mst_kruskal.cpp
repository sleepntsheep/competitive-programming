#include <bits/stdc++.h>
using namespace std;

#define MxN 1010
int P[MxN];

int _find(int i) {
    if (P[i] == i) return i;
    return P[i] = _find(P[i]);
}

void _union(int x, int y) {
    x = _find(x);
    y = _find(y);
    if (x == y) return;
    P[x] = y; 
}

typedef pair<pair<double, int>, pair<int,int>> ppii;

int main() {
    int v,e;
    scanf("%d%d", &v, &e);
//    vector<ppii> graph;
    priority_queue<ppii, vector<ppii>, greater<ppii>> pq;
    for (int i = 0, u, v; i < e; i++) {
        double w;
        scanf("%d%d%lf", &u, &v, &w); // src dest weight;
 //       graph.push_back({{w, i}, {u, v}});
        pq.push({{w, i}, {u, v}});
    }

    /* result vector */
    vector<int> mst;
    double sum = 0;

    /* parent init */
    for (int i = 0; i < v; i++)
        P[i] = i;

    /* kruskal */
    while (!pq.empty()) {
        ppii p = pq.top();
        int u, v;
        double w;
        w = p.first.first;
        u = p.second.first;
        v = p.second.second;
        pq.pop();

        if (_find(u) != _find(v)) { // src and dest are not connected
            _union(u, v);
            mst.push_back(p.first.second);
            sum += w;
        }
    }

    sort(mst.begin(), mst.end());

    printf("%.3lf\n", sum);
    for (int p : mst)
        printf("%d\n", p);

    return 0;
}

