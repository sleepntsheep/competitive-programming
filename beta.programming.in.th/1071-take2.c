#include <stdio.h>
#include <string.h>

int b[1020][1020];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        b[y][x] = 1;
    }
    for (int i = 0; i < m; i++){
        int x, y, r, c = 0;
        scanf("%d%d%d", &x, &y, &r);
        for (int yt = y-r; yt <= y+r; yt++) {
            if (yt < 0) continue;
            for (int xt = x-r; xt <= x+r; xt++) {
                if (xt < 0 ) continue;
                if (b[yt][xt]) {
                    c++;
                    b[yt][xt] = 0;
                }
            }
        }
        printf("%d\n", c);
    }
}