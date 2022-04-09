#include <stdio.h>

#define INF 100000000
int B[260][260];

int main() {
    int n, R = 0, L = 255, H = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        B[0][a] = 1;
        B[b][a] = 1;
        B[b][c] = 1;
        B[0][c] = 1;
        for (int j = a; j <= c; j++)
            B[b][j] = 1;
        R = c > R ? c : R;
        L = a < L ? a : L;
        H = b > H ? b : H;
    }

    int nB = 1;
    int p = 0;

    for (int i = L; i <= R; i++) {

        int min = -INF,
            max = -INF;

        for (int j = H; j >= 0; j--){
            if (B[j][i]) {
                max = j > max  && (j == 0 || B[j][i+1])? j : max;
                min = j > min  && j != max ? j : min;
            }
            if (max != -INF && min != -INF)
                break;
        }
        if (min != 0 && max != p && max != -INF) {
            printf("%d %d ", i, max);
            if (max == 0)
                nB = 1 - nB;
        } else if (min == 0 && max !=p) {
            if (nB)
                printf("%d %d ", i, max);
            else
                printf("%d %d ", i, min);
            nB = 1 - nB;
        }
        p = max;
    }
}
