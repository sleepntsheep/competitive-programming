#include <stdio.h>
#include <stdlib.h>

typedef struct {int x, y;} P;

int cmp(const void *a, const void *b) {
    P aa = *(P*)a;
    P bb = *(P*)b;
    if (aa.x > bb.x) return 1;
    if (aa.x < bb.x) return -1;
    return aa.y - bb.y;
}

int t, i, j, dne; // pi - path index
P s[1005];
char p[2200]; // path
int main() {
    scanf("%d", &t);
    while(t--) {
        int ok = 1, pi = 0, n;
        P nw = { 0, 0 };
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d%d", &s[i].x, &s[i].y);
        qsort(s, n, sizeof *s, cmp);
        for (i = 0; i < n; i++) {
            if (s[i].x < nw.x || s[i].y < nw.y) {
                ok = 0;
                break;
            }
            int dx = s[i].x - nw.x;
            int dy = s[i].y - nw.y;
            nw.x += dx;
            nw.y += dy;
            for (j = 0; j < dx; j++)
                p[pi++] = 'R';
            for (j = 0; j < dy; j++)
                p[pi++] = 'U';
        }
        p[pi] = 0;
        if (ok)
            printf("YES\n%s\n", p);
        else
            puts("NO");
    }
    return 0;
}
