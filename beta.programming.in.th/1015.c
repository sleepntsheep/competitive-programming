#include <stdio.h>

int b[20][20];
int v[18][18];
int vc[18][18];
int n;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int r;

int dfsHelper(int x, int y, int type) {
    if (v[y][x])
        return 0;
    int w = 1;
    v[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= n || ny >= n || ny < 0 || nx < 0)
            continue;
        if (b[ny][nx] == type)
            w += dfsHelper(nx, ny, type);
    }
    return w;
}

int checkHelper(int x, int y) {
    int type = b[y][x];
//    printf("Debugging , YX: %d %d, Type: %d\n", y,x,type);
    if (y > 0 && y < n - 1)
        if (type == b[y-1][x] && type  == b[y+1][x])
            return 0;
    if (x > 0 && x < n - 1)
        if (type == b[y][x-1] && type == b[y][x+1])
            return 0;
    if (y > 1)
        if (type == b[y-2][x]  && type== b[y-1][x])
            return 0;
    if (y < n- 2)
        if (type == b[y+2][x] && type == b[y+1][x])
            return 0;
    if (x > 1)
        if (type == b[y][x-1] && type == b[y][x-2])
            return 0;
    if (x < n- 2)
        if (type == b[y][x+1] && type == b[y][x+2])
            return 0;
    return 1;
}


int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (dfsHelper(i, j, b[j][i]) == 3)
                r += checkHelper(i, j);

    printf("%d\n", r);
}
