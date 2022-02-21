#include <stdio.h>
#define INF 1e9

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int m1 = INF,
    m2 = INF,
    ma = -INF;
    for (int i = 0;i < n; i++) {
        if (m1 > a[i])
            m1 = a[i];
        else if (m2 > a[i])
            m2 = a[i];
        if (ma < a[i])
            ma = a[i];
    }
    printf("%s", (m1+m2 > ma) ? "no" : "yes");
}