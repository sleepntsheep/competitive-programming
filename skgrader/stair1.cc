#include <bits/stdc++.h>
using namespace std;

long long dp[55];

long long fibo(int n) {
    if (dp[n] != 0) return dp[n];
    return dp[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}
