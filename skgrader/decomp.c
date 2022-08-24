#include <stdio.h>
#define N 2005
#define M 100999

int c[N][N] = { 1 };
int n, t, i, j;

int main() {
    scanf("%d", &t);
    for (i = 1; i < N; i++){ 
        for (j = 0; j < N; j++) {
            if (j < i) {
                c[i][j] = c[i-1][j];
                continue;
            }
            c[i][j] = (c[i-1][j] + c[i-1][j-i]) % M;
        }
    }
    while (t--){
        scanf("%d", &n);
        printf("%d\n", c[n][n]);
    }

}
