#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <unistd.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))

using namespace std;

#define pii pair<long double, int>
#define vec vector
#define st first
#define nd second
#define INF 1e5

int p[101000]; //parent
double c[101000]; // cost
char v[101000]; // visited

int n, m, s, t, i, j, a, b;
int main() {
    priority_queue<pii, vector<pii>, greater<pii>> q; 
    cin >> n >> m >> s >> t;
    vec<pii> g[n+1];
    for (int i = 0; i < n; i++) {
        c[i] = 1e10;
    }
    c[s] = 0;

    for (i = 0; i < m; i++) {
        cin >> a >> b >> j;
        long double ww = static_cast<double>(log2(j));
        g[a].push_back({ww, b}); 
        g[b].push_back({ww, a});
    }
    q.push({c[s], s});

    while (!q.empty()) {
        pii pr = q.top();
        q.pop();
        if (pr.nd == t) break;
        
        for (pii x: g[pr.nd]) {
            double nw = x.st + c[pr.nd];
            if (nw < c[x.nd]) {
                c[x.nd] = nw;
                q.push({nw, x.nd});
                p[x.nd] = pr.nd;
            } else {
            }
        }
    }

    stack<int> pt;
    int pl = t;
    pt.push(pl);
    while (pl != s) {
        pl = p[pl];
        pt.push(pl);
    }

    while (!pt.empty()) {
        cout << pt.top() << ' ';
        pt.pop();
    }

    return 0;
}
