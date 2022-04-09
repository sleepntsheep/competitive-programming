#include <stdio.h>

void p(int n, int m, int x) {
    if (x > m) return;
    printf("%d x %d = %d\n", n, x, n *x );
    p(n, m, ++x);
}

int main() {
    int n,m ;
    scanf("%d%d", &n, &m);
    p(n, m, 1);
}
