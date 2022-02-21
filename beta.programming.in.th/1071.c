#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int y[n][3];
    for (int i = 0; i < n; i++){
        scanf("%d%d", &y[i][0], &y[i][1]);
        y[i][2] = 0;
    }
    int b[m][3];
    for (int i = 0; i < m; i++) {
        int x, yy, r, c = 0;
        scanf("%d%d%d", &x, &yy, &r);
        for (int j = 0; j < n; j++) {
            if (y[j][2]) continue;
            if (y[j][0] >= x - r && y[j][0] <= x + r) {
                if (y[j][1] >= yy - r && y[j][1] <= yy + r) {
                    c++;
                    y[j][2] = 1;
                }
            }
        }
        printf("%d\n", c);
    }
    
}