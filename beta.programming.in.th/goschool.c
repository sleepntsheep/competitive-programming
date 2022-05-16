#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int n, m, o;
bool DOG[54][54];
uint64_t W[54][54];

uint64_t dfs(int y, int x) {
    if (DOG[y][x]) return 0;
    if (W[y][x] != 0) return W[y][x];
    if (y == 1 && x == 1) return W[y][x] = 1;
    if (y == 1) return W[y][x] = dfs(y, x - 1);
    if (x == 1) return W[y][x] = dfs(y - 1, x);
    return W[y][x] = dfs(y-1, x) + dfs(y, x-1);
}

int main() {
    scanf("%d%d%d", &n, &m, &o);
    for (int i = 0, x, y; i < o; i++) {
        scanf("%d%d", &y, &x);
        DOG[y][x] = true;
    }

    printf("%lu", dfs(n, m));

    return 0;
}
