#include <bits/stdc++.h>
using namespace std;

int N, M, K;

int P[400005];

int _find(int x) {
    if (P[x] == 0

}


int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> N >> M >> K;
    vector<int> g[N+5];
    int r[N+5];
    for (int i = 1, a, b; i <= M; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i <= N; i++)
        cin >> r[i];
    int q;
    cin >> q;
    while (q--) {
        int src,dst;
        cin >> src >> dst;

    }

    return 0;
}
