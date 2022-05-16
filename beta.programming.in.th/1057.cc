#include <stdio.h>
#include <string.h>

int A[1001][1001];
int pr[1001];

unsigned char count[1001];

int rcs(int n) {
    if (++count[n] == 2) {
#ifdef DEBUG
        fprintf(stderr, "I: %d / Count: %d", n, count[n]);
#endif
        return -1;
    }
    for (int i = 0; i < pr[n]; i++) {
        if (rcs(A[n][i]) == -1) return -1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int a, k;
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        while (k--) {
            scanf("%d", &a);
            A[i][pr[i]++] = a-1;
        }
    }

    for (int i = 0; i < n; i++) {
        memset(count, 0, sizeof count);
        if (rcs(i) == -1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
