#include <stdio.h>

// O(n^2)

#define N 1005
int a[N];
int b[N];

int main() {
    int n, ans = -1e9;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    for (int i = 1; i <= n; i++)
        b[i] = b[i-1] + a[i];
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            if (b[j]-b[i] > ans)
                ans = b[j] - b[i];
    printf("Ans: %d", ans);

}
