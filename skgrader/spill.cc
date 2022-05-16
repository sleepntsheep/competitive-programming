#include <stdio.h>

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char b[102][102];
int capa;
int n, m, l;
void dfs(int x, int y) {
    if (y < 0 || x < 0 || y >= n || x >= m) return;
    if (b[y][x] == '#' || b[y][x] == 'd') return;
    if (b[y][x] != '*')
        capa++;
    b[y][x] = 'd';

    for (int i =0 ; i< 4; i++)
        dfs(x+dx[i],y+dy[i]);
}

int main() {
    scanf("%d%d%d", &n, &m, &l);
    int x, y;
    for (int i = 0; i < m; i++) {
        fgets(b[i], 101, stdin);
        for (int j= 0 ; j < n; j ++) {
            if (b[i][j] == 'x') y = i, x = j;
        }
    }

    dfs(x,y);

    if (capa >= l) puts("Umm");
    else puts("Yes");
    return 0;
}
