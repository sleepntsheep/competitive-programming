#include <stdlib.h>
#include <stdio.h>

#define ABS(x) (((x) < 0) ? (-x) : (x))

int n;

int cmpfnc(const void *x, const void *y) {
    return *(int*)x - *(int*)y;
}

int main() {
    scanf("%d", &n);
    int *x = malloc(sizeof(int) * n);
    int *y = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", x+i, y+i);
    }

    qsort(x, n, sizeof(int), cmpfnc);
    qsort(y, n, sizeof(int), cmpfnc);

    long long sumx = 0, sumy = 0, dist = 0;
    for (int i = 1; i < n; i++) {
        sumx += ABS(x[i]-x[i-1]) * i;
        sumy += ABS(y[i]-y[i-1]) * i;
        dist += sumx + sumy;
    }

    printf("%lld", dist);
    return 0;
}
