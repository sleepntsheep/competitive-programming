#include <stdio.h>

// O(n)

#define N 1005
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int a[N];
int dp[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    for (int i = 1; i <= n; i++)
        dp[i] = MAX(a[i], dp[i-1] + a[i]);
    int ans = -1e9;
    for (int i = 1; i <= n; i++)
        ans = MAX(ans, dp[i]);
    printf("\nAns: %d", ans);
}
