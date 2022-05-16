#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; i++) 

map<pair<int, int>,int> mp;
int main() {
    int n, q;
    cin >> n >> q;
    int dt[n];
    FOR(i,0,n) {
        cin >> dt[i];
    }

    FOR(i,0,q) {
        int qa, qb, qs, qe;
        cin >> qa >> qb >> qs >> qe;
        int c = 0;
        FOR(j,qa-1,qb)
        {
            if (dt[j] <= qe && dt[j] >= qs) c++;
        }
        cout << c << ' ';
    }

    return 0;
}
