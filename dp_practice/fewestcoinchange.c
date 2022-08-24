#include <stdio.h>

// O(nc)

#define N 1005
#define C 20000
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int a[N];
int dp[C];
int first[C];

int main() {
    // n = coin counts
    // c = changes
    int n,c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);
    scanf("%d", &c);

    for (int i = 0; i <= c; i++)
        dp[i] = 1e9;
    dp[0] = 0;

    for (int i = 0; i < n; i++)
        for (int j = c; j >= a[i]; j--)
            if (dp[j-a[i]]+1 < dp[j]) {
                dp[j]  =  dp[j-a[i]] + 1;
                first[j] = a[i];
            }
    printf("Ans: %d\n", dp[c]);
    printf("Traces: ");
    int t = c;
    while (t) {
        printf("%d ", first[t]);
        t -= first[t];
    }
}

