#include <stdio.h>

#define N 505
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int p[N];
long long dist[N][N];
int n, m, i, j, k, u, v, w;

int main() {
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) dist[i][j] = 1e9;

    scanf("%d%d", &n, &m);

    for (i = 1; i <= n; i++)
        scanf("%d", p+i);

    for (;m--;) {
        scanf("%d%d%d", &u, &v, &w);
        dist[u][v] = w;
        dist[v][u] = w;
    }

    for (i = 1; i <= n; i++, dist[i][i] = 0)
    for (j = 1; j <= n; j++)
    for (k = 1; k <= n; k++)
        dist[j][k] = MIN(dist[j][k], dist[j][i] + dist[i][k]);

    long long ans, ansdist = 1e9, dst;

    for (i = 1; i <= n; i++, dst = 0) {
        for (j = 1; j <= n; j++)
            dst += dist[i][j] * p[j];
        if (dst < ansdist) {
            ans = i;
            ansdist = dst;
        }
    }

    printf("%lld %lld", ans, ansdist);

    return 0;
}
