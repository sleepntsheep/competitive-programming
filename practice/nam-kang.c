#include <stdio.h>
#include <string.h>
int i, j, n, m, k;
int main() {
    int n = 8;
    int a[n];
    int mh = -1;
    for (i = 0; i < n; i++) {
        scanf("%d", a+i);
        if (a[i] > mh) mh = a[i];
    }
    char b[mh][n];
    memset(b, ' ', sizeof b);
    for (i = 0; i < n; i++) {
        for (j = 0; j < a[i]; j++) {
            b[j][i] = '#';
        }
    }

    int s = 0;
    for (i = 0; i < mh; i++) {
        int o = -1, p = -1;
        for (j = 0; j < n - 1; j++) {
            if (b[i][j] == '#' && b[i][j+1] == ' ') o = j+1;
            if (b[i][j] == ' ' && b[i][j+1] == '#') p = j;
            if (o != -1 && p != -1) {
                for (k = o; k <= p; k++) {
                    b[i][k] = '-';
                }
                o = p = -1;
            }
        }
    }

    for (i = mh-1; i>=0; i--) {
        for (j = 0; j < n; j++) {
            putc(b[i][j], stdout);
        }
        putc('\n', stdout);
    }
    printf("%d", s);
}
