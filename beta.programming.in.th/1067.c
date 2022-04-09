#include <stdio.h>
#include <string.h>

int b[100][100];
int visited[100][100];

int main() {
    int n, m, k;
    int bx, by;
    scanf("%d%d%d", &n, &m, &k);
    int mm = n * m;
    int mc = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < k; i++) {
        memset(visited, 0, sizeof visited);
        scanf("%d%d", &bx, &by);
        bx--;
        by--;
        while (1) {
            
            switch (b[by][bx]) {
                case 1:
                    by--;
                    break;
                case 2:
                    bx++;
                    break;
                case 3:
                    by++;
                    break;
                case 4:
                    bx--;
                    break;
            }

            if (by < 0) {
                printf("N\n");
                break;
            } else if (by >= m) {
                printf("S\n");
                break;
            } else if (bx < 0) {
                printf("W\n");
                break;
            } else if (bx >= n) {
                printf("E\n");
                break;
            }
            if (mc > mm)
            {
                // printf("NO %d %d %d \n", bx , by, mc);
                printf("NO\n");
                break;
            }
            else if (visited[by][bx]) {
                printf("NO\n");
                break;
            }
            visited[by][bx] = 1;
            mc++;
            // printf("%d %d %d\n", bx, by, mc);
        }
    }
}