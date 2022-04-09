#include <stdio.h>

int main () {
    int h, m;
    scanf("%d%d", &h, &m);
    printf("%d %d", (h - (m - 45 < 0)) + (24 * ((h - ( m - 45 < 0 ) ) < 0)), (m - 45) + (60  * (m - 45 < 0)));
}
