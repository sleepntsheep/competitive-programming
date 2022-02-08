#include <stdio.h>

int main() {
    int n;
    int r = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            r += 1;
        else r += 2;
    }

    printf("%d", r);

}
