#include <stdio.h>

char b[5][5];

int main() {
    int m, n, k;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%c", &b[m][n]);

    scanf("%d", &k);
    for (int i  = 0; i < k; i++) {
        char dir;
        int y, x;
        scanf("%d%d%c", &y, &x, &dir);
    }


}
