#include <stdio.h>

#define mxn 1005
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
int area[mxn][mxn];
int psarea[mxn][mxn];

int ps(int y, int x) {
    if (psarea[y][x]) return psarea[y][x];
    if (!y && !x) return psarea[0][0] = area[0][0];
    if (!y) return psarea[y][x] = ps(y, x-1) + area[y][x];
    if (!x) return psarea[y][x] = ps(y-1, x) + area[y][x];

    return psarea[y][x] = area[y][x] + ps(y-1, x) + ps(y, x-1) - ps(y-1, x-1);
}

int main() {
    int ny, nx, k, i, j, max = -1, ar;
    scanf("%d%d%d", &ny, &nx, &k);
    for (i = 0; i < ny; i++)
        for (j = 0; j < nx; j++)
            scanf("%d", area[i]+j);
    ps(ny - 1, nx - 1);
    for (i = k; i < ny; i++) {
        for (j = k; j < nx; j++) {
            ar = psarea[i][j] - psarea[i-k][j] - psarea[i][j-k] + psarea[i-k][j-k];
            max = MAX(max, ar);
        }
    }
    printf("%d", max);
}
