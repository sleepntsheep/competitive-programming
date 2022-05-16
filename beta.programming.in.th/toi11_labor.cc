#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

#define pii pair<int, int>
#define st first
#define nd second
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define ll long long

ll M, N;
ll T[1000005];

ll F(ll t) {
    ll s = 0;
    FOR(i,0,M)
        s += t / T[i];
    return s;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> M >> N;
    FOR(i,0,M)
        cin >> T[i];
    
    // binary search
    ll l = 0, r = 1e15;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll ft = F(mid);
        if (ft >= N)
            r = mid - 1;
        else
            l = mid + 1;
    }

    cout << l;

    return 0;
}



