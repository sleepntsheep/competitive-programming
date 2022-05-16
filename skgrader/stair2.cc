#include <bits/stdc++.h>
using namespace std;
long long dp[60] = {1, 1, 2};

long long tribo(int n) {
    if (dp[n] != 0) return dp[n];
    return dp[n] = tribo(n-1)+tribo(n-2)+tribo(n-3);
}

int main() {
    int n;
    cin >> n;

    cout << tribo(n);
    return 0;
}
