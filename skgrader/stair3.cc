#include <bits/stdc++.h>
using namespace std;

long long dp[60] = {1, 1, 2};
long long dpn[60] = {1, 3, 8};

long long pp(int n) {
    if (dp[n] != 0) return dp[n];
    return dp[n] = pp(n-1) + pp(n-2) + pp(n-3);
}

long long np(int n) {
    if (dpn[n] != 0) return dpn[n];
    return dpn[n] = np(n-1) + np(n-2) + np(n-3) + pp(n+1);
}


long long wtf(int n) {
    return pp(n) + np(n);
}

int main() {
    int n;
    cin >> n ;
    cout << wtf(n) - pp(n+1);

    return 0;
}
