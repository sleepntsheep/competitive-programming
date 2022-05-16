#include <stdio.h>

int prev[10];
int ord[10];

int N, m;

void print(short flag, short n) {
    if (n == N) {
        for (int i = 0; i < n; i++) {
            printf("%d ", ord[i]);
        }
        puts("");
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (flag & (1 << i)) continue;
        if (flag == 0 && prev[i]) continue;
        ord[n] = i;
        print(flag | (1 << i), n+1);
    }
}

int main() {
    scanf("%d%d", &N, &m);
    for (int i = 0, a; i < m; i++) {
        scanf("%d", &a);
        prev[a] = 1;
    }

    for (int i = 1; i <= N; i++) {
        print(0, 0);
    }

    return 0;
}

