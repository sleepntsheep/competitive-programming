#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

#define len(a) sizeof (a) / sizeof (*(a))

const int mxn = 400005;

vector<pair<int,int>> g[mxn];

// second - max, first - min
pair<int,int> nx[mxn];

int deltan(int n){
    return nx[n].second - nx[n].first;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m, s, d;
    cin >> n >> m >> s >> d;

    for (int i = 0, u, v, t; i < m; i++){
        cin >> u >> v >> t;
        g[u].emplace_back(t, v);
        g[v].emplace_back(t, u);
    }

    for (int i = 0; i < len(nx); i++)
        nx[i] = {-1e9, 1e9};
    nx[s] = {1e9, -1e9};

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.emplace(deltan(s), s);

    while (!pq.empty())
    {
        int se = pq.top().second;
        int ds = pq.top().first;
        pq.pop();

        if (deltan(se) != ds) continue;

        for (auto x : g[se])
        {
            int nt = x.first;
            int ns = x.second;
            
            int _max = max(nx[se].second, nt);
            int _min = min(nx[se].first, nt);

            int delta = _max - _min;

            if (delta < deltan(ns))
            {
                nx[ns] = {_min, _max};
                pq.emplace(delta, ns);
            }
        }
    }

    cout << deltan(d);

    return 0;
}

