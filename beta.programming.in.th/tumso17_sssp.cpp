#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

#define ld long double
#define pii pair<ld, int>
#define vec vector
#define INF 1e300
#define piq priority_queue
#define nd second
#define st first

int n, m, s, t, d = 1;

vec<vec<pii>> V(100009);
vec<ld> c(100009, INF);
int pv[100009];
int vd[100009];

int main() {
    cin >> n >> m >> s >> t;
    c[s] = 1;
    //adj
    for (int i = 0; i < m; i++) {
        int u, v;
        ld w;
        cin >> u >> v >> w;
        //w = log(w);
        V[u].push_back({w, v});
        V[v].push_back({w, u});
    }

    piq<pii> p;

    p.push({c[s], s});
     
    while (!p.empty()) {
        pii cp = p.top();
        p.pop();
        if (t == cp.st)
            break;
        if (vd[cp.nd])
            continue;
        vd[cp.nd] = true;
        for (pii pa: V[cp.nd]) {
            if (c[pa.nd] > c[cp.nd] * pa.st) {
                p.push(pa);
                c[pa.nd] = c[cp.nd] * pa.st;
                pv[pa.nd] = cp.nd;
            }
        }
    }

    stack<int> ph;
    ph.push(t);

    int tcr = t;
    while (tcr != s) {
        tcr = pv[tcr];
        ph.push(tcr);
    }

    while (!ph.empty()) {
        cout << ph.top() << ' ';
        ph.pop();
    }
}

