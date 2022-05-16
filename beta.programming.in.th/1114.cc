#include <bits/stdc++.h>
using namespace std;

int n;
int W[610][610];
int dp[1000];

// traveling from i (r + c) to j (r' + c') take W[i][j] energy;
// dp[i] store distance from i (r + c) to 2 (1 + 1)

int main() {
    cin >> n;
    dp[2] = 0;
    for (int i = 1; i <= 2*n; i++)
        for (int j = 1 ; j <= 2*n; j++)
            cin >> W[i][j];

    for (int i = 3; i <= 2*n; i++) {
        dp[i] = 1e9;
        for (int j = 2; j < i; j++) {
            dp[i] = min(dp[i], dp[j] + W[i][j]);
        }
    }

    cout << dp[2*n];


}
