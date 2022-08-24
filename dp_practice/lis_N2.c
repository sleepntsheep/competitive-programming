#include <stdio.h>
#define N 10005

// O(n^2)

int a[N];
int dp[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);

    for (int i = 0; i < n; i++) {
        int z = 0;
        for (int j = 0; j < i; j++)
            if (a[i] > a[j] && dp[j] > dp[z])
                z = j;
        dp[i] = dp[z] + 1;
    }
    
    int ans = -1e9;
    for (int i = 0; i < n; i++)
        if (dp[i] > ans) ans = dp[i];
    printf("Ans: %d", ans);
}
