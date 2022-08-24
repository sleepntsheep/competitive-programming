
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; i++)
#define N 500

map<int, int> dp[N];
#define dp(i,n) dp[i][n];
int b[N];

int main() {
    int n, s=0,mx=-1e9;
    cin >> n;
    FOR(i,0,n) 
    {
        cin >> b[i];
        s += b[i];
        mx = max(mx, b[i]);
    }
    dp[0][0] = 1;
    FOR(i,0,n)
    {
        for (int j = 20000; j > -20000; j--)
        {
            FOR(k,1,n+1)
            {
                dp[k][j] += dp[k-1][j-b[i]];
            }
        }
#ifdef DEBUG
        cout << "I: " << i << " ___________________ " <<endl;
        FOR(k,0,n+1)
        {
            FOR(j,0,max(s, mx)+1)
                cout << dp[k][j] << ' ';
            cout << endl;
        }
#endif
    }
    int l = 1e9, ld = 1e9;
    for (auto j : dp[n/2])
    {
        if (abs(s/2-j.second) < ld)
        {
            l = j.first;
            ld = abs(s/2-j.second);
        }
    }
#ifdef DEBUG
    cout << "L: " << l << endl;
#endif
    cout << abs(s - 2*l);
}


