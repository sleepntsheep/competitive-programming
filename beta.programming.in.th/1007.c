#include <stdio.h>

#define INF 100000000

int a[24];
int k, n;

int min(int a, int b) {
    int min = INF;
    if (a < min)
        min = a;
    if (b < min)
        min = b;
    return min;
}

int main() {
    for (int i = 0; i < 24; i++) {
        scanf("%d", &k);
        if (k == -1)
            break;
        a[i] = k;
        n++;
    }

    for (int i = 0; i < n; i++) {
        int y = 1, w = 1, t = 0;

        for (int j = 0; j < a[i]; j++) {
            int tp = t, wp = w;
            t = w;
            w += y;
            w += tp;
        }

        printf("%d %d\n", w, w+y+t);
    }
}
