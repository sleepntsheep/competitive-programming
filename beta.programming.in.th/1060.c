#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int main() {
    int n;
    scanf("%d", &n);
    int a[n][2];
    int maxh = -1, maxw = -1, maxwi;
    int nn = n;
    while(n--) {
        scanf("%d%d", a[n], a[n]+1);
        maxh = MAX(maxh, a[n][1]);
        maxw = MAX(maxw, a[n][0]);
        if (a[n][0] + 2 * a[n][1] > maxw)
            maxw = a[n][0]+2*a[n][1], maxwi= n;
        a[n][0]--;
    }
    n = nn;

    maxw--;
    char b[maxh+200][maxw+200];
    memset(b, '.', sizeof b);

    for (int i = 0; i < n; i++) {
        for (int j = 0, h = maxh-1; j < a[i][1] ; i++, h--) {
            char *pt = &b[h+100][a[i][0]+j+100];
            if (*pt == '\\')  *pt = 'V';
            else *pt = '/';
        }

        for (int j = 0, h = maxh-a[i][1]; j < a[i][1] ; i++, h++) {
            char *pt = &b[h+100][a[i][0]+j+a[i][1]+100];
            if (*pt == '/')  *pt = 'V';
            else *pt = '\\';
        }
    }

    for (int i =0 ;i  < maxh; i++) {
        for (int j =0 ;j < maxw-1;j ++) {
            putc(b[i+100][j+100], stdout);
        }
        putc('\n', stdout);
    }
}
