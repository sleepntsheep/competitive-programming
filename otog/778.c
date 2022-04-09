#include <stdio.h>

int n, l, r;
int a[200000010];

int count(int s);

int main() {
    scanf("%d%d%d", &n, &l, &r);
    printf("%d", count(n));
}

int count(int s) {
    if (s < l + r) return 1;
    if (a[s] != 0) return a[s];
    else {
        a[s] = count(s * l / (l+r)) + count(s * r / (r+l));
        return a[s];
    }
}
