#include <stdio.h>

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

char a[50003][100];
int main() {
    int n, p, q, r;
    scanf("%d", &n);
    int maxh = 0;
    while(n--) {
        scanf("%d%d%d", &p, &q, &r);
        for (int j = q; j < q+r; j++)
            a[p][j] = 1;
        maxh = MAX(maxh, p);
    }

    for (int i = 1; i <= maxh; i++) {
        for (int j = 1; j <= 70; j++) {
            if (!a[i][j]) putc('o', stdout);
            else putc('x', stdout);
        }
        putc('\n', stdout);
    }

    return 0;
}

