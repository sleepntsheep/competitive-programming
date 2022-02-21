#include <stdio.h>
#include <string.h>

int min(int size, int board[size][size], int count) {
    int r = 0;
    int ii, jj;
    for (int a = 0; a < count; a++) {
        int mi = 1e9;
        for (int i = 0; i < size; i++) {
            for (int j = 0 ; j <  size; j++) {
                if (board[i][j] == 1e9) continue;
                if (mi > board[i][j]) {
                    mi = board[i][j];
                    ii = i;
                    jj = j;
                }
            }
        }
        board[ii][jj] = 1e9;
        // printf("\n%d\n", mi);
        r += mi;
    }
    return r;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int v[n+1][n];
    int h[n][n+1];
    int b[n][n];
    memset(v, 0, sizeof v);
    memset(h, 0, sizeof h);
    memset(b, 0, sizeof b);

    for (int i = 0; i <= 2 * n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &v[i/2][j]);
            }
        }
        else {
            for (int j = 0; j <= n; j++) {
                scanf(" %d", &h[i/2][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = 3 * v[i][j] + 5 * h[i][j] - 3 * v[i+1][j] - 5 * h[i][j+1];
        }
    }
    // for (int i = 0; i < n; i ++) {
    //     for (int j = 0; j < n; j++)
    //     printf("%d ", b[i][j]);
    //     printf("\n");
    // }

    int r = min(n, b, k);

    printf("%d", r);
}