#include <stdio.h>

#define mxn 8000000

char sieve[mxn];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= mxn / 2; i++) {
        for (int j = 2; j * i <= mxn; j++) {
            sieve[i*j] = 1;
        }
    }
    int j = 1;
    for (int i = 0; i < n;) {
        if (!sieve[++j]) i++;
    }

    printf("%d", j);

    return 0;
}
