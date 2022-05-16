#include <bits/stdc++.h>
using namespace std;

int lis(size_t n, int* arr) {
    int dp[n];

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    //find max in dp[n];
    int _max = -1;
    for (int i = 0; i < n; i++)
        _max = max(_max, dp[i]);
    return _max;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << lis(n, a);
    return 0;
}
