#include <stdio.h>
#include <stdlib.h>

#define FOR(i,a,b) for(int i = a; i < b; i++)
#define ll long long
#define INF 1e9
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int n, m;

char b[7005][7005];
int qs[7005][7005];

int out(int x, int y)
{
    return x < 0 || y < 0 || x >= n || y >= m;
}

int qsrect(int x, int y, int k)
{
    int nx = x + k, ny = y + k;
    if (out(nx,ny)) return -1;
    if (!y && !x) return qs[ny][nx];
    if (!y) return qs[ny][nx] - qs[ny][x-1];
    if (!x) return qs[ny][nx] - qs[y-1][nx];
    return qs[ny][nx] - qs[y-1][nx] - qs[ny][x-1] + qs[y-1][x-1];
}

int main()
{
    scanf("%d%d", &n, &m);
    FOR(i,0,n)
        scanf("%s", b[i]);

    qs[0][0] = b[0][0];

    /* make quick sum array */
    FOR(i,1,n)
        b[i][0] = qs[i-1][0] + b[i][0];
    FOR(i,1,m)
        b[0][i] = qs[0][i-1] + b[0][i];
    FOR(i,1,n)
        FOR(j,1,m)
            qs[i][j] = qs[i-1][j] + qs[i][j-1] - qs[i-1][j-1] + b[i][j];

    int _k = MIN(n,m);


    return 0;
}
