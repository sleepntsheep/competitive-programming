#include <stdio.h>

int n, k, m, day, rc, x, y, dir;
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, -1, 0, 1 };
char b[200][200][9];

int main() {
    scanf("%d%d%d", &n, &k, &m);
    for (int i = 0; i < m; i++) {
        int r, c;
        char s[7];
        scanf("%d%d%s", &r, &c, s);
        for (int j = 0; j < 7; j++)
            b[r-1][c-1][j] = s[j];
    }
    
    while (rc < k) {
        int d = day % 7;
        switch (b[x][y][d]) {
            case 'L':
                dir = (dir + 1) % 4;
                //printf("L\n");
                rc++;
                break;
            case 'R':
                //printf("R\n");
                dir = (dir + 3) % 4;
                rc++;
                break;
            case 'S':
            default:
                break;
        }
        if (rc == k)
            day--;
        int nx = x + dx[dir],
            ny = y + dy[dir];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
            day--;
            rc++;
            dir = (dir + 2) % 4;
        } else {
            x = nx;
            y = ny;
        }

        //printf("X: %d, Y: %d\n", x, y);
        day++;
    }

    printf("%d\n", day);
}
