#include <stdio.h>
#include <string.h>
#include <math.h>

int n, k;

int main() {
    scanf("%d%d", &k, &n);
    int re = 0;
    for (int i = 0; i <= n - 1; i++){
        int xr = (i+1) ^ i;
        while (xr > 0) {
            re += xr % 2;
            xr /= 2;
        }
    }
    printf("%d", re);
}
