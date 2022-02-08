#include <stdio.h>

int b[4005];
int ha, fu;

int main() {
    int w, h, n;
    scanf("%d%d%d", &w, &h, &n);
    for (int i = 0; i < n; i++) {
        int x, a;
        scanf("%d%d", &x, &a);
        for (int j = x; j < x + a; j++)
            b[j]++;
    }

    for (int i = 0; i < w; i++){
        if (b[i] == 1)
            ha++;
        else if (b[i] == 0)
            fu++;
    }

    /*for (int i = 0; i < w; i++)
        printf("%d ", b[i]);*/

    printf("%d %d\n", fu*h, ha*h);
}
