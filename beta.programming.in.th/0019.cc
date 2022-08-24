#include <stdio.h>
#define ABS(a) ((a) < 0 ? (-(a)) : (a))

typedef struct {
    int s, b;
} SN;

SN a[12];
int ans = 1e9, n;
int mask = 0;

void search(int sweet, int bitter, int m) {
    if (ABS(sweet-bitter) < ans && mask != 0) // at least 1 type
        ans = ABS(sweet-bitter);
    if (m == n) return;
    mask |= (1 << m);
    search(sweet * a[m].s, bitter + a[m].b, m+1);
    mask ^= (1 << m);
    search(sweet, bitter, m+1);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &a[i].s, &a[i].b);
    search(1, 0, 0);
    printf("%d", ans);
}
