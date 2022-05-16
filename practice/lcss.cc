#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.size(), l2 = s2.size();
    int dp[l1+1][l2+1];
    memset(dp, 0, sizeof dp);

    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s2[j-1] == s1[i-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
        }
    }

    int _max = -1;
    for (int i = 1; i <= l1; i++)
        for (int j = 1; j <= l2; j++)
            _max = max(_max, dp[i][j]);
    cout << _max;
}
