#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, e;
    cin >> v >> e;
    int dist[v+3][v+3]; // dist[i][j] = dist from i to j;

    // init with inf
    memset(dist, 1000000000, sizeof dist);

    // I to I  = 0 distance;
    for (int i = 1; i <= v; i++)
        dist[i][i] = 0;

    // take eedges from user
    for (int i = 0, uu, vv, ww; i < e; i++) {
        cin >> uu >> vv >> ww; // edge from uu to vv with weight ww;
        dist[uu][vv] = ww;
    }

    {int i, j, k;
    for (i = 1; i <= v; i++)
    for (j = 1; j <= v; j++)
    for (k = 1; k <= v; k++)
        dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
    }


    return 0;
}
