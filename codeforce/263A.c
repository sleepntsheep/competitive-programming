#include <stdio.h>

#define abs(a) (((a) > 0) ? (a) : (-(a)))
int main() {
    int x, y, i, j, q;
    for (i = 1; i < 6; i++)
        for (j = 1; j < 6; j++) {
            scanf("%d", &q);
            if (q) {
                x = j;
                y = i;
            }
        }
    printf("%d", abs(3-x) + abs(3-y));
}
