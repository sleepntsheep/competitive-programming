#include <stdio.h>
#include <string.h>

int main() {
    int l, t, n;
    scanf("%d%d%d", &l, &t, &n);
    // char r[l];
    // memset(r, 0, sizeof r);
    int a[n];
    char c[n];
    for (int i = 0; i < n; i++)  {
        scanf("%d %c", &a[i], &c[i]);
        // r[a[i]] = c[i];
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] == 0 )  {
                if (c[j] == 'L') {
                    c[j] = 'D';
                    // r[a[j]] = 'D';
                }
            }
            else if (a[j] == l - 1 ) {
                if (c[j] == 'D') {
                    c[j] = 'L';
                    // r[a[j]] = 'L';
                }
            }
            // else if (r[a[j] - 1] == 'D' && c[j] == 'L') {
            //     r[a[j] - 1] = 'L';
            //     r[a[j]] = 'D';
            //     c[j] = 'D';
            // }
            // else if (r[a[j] + 1] == 'L' && c[j] == 'D') {
            //     r[a[j] + 1] = 'D';
            //     r[a[j]] = 'L';
            //     c[j] = 'L';
            // }
            
            if (c[j] == 'D') {
                // r[a[j]] = 0;
                // r[a[j] + 1] = 'D';
                a[j]++;
            } else if (c[j] == 'L') {
                // r[a[j]] = 0;
                // r[a[j] - 1] = 'L';
                a[j]--;
            }
        }
        for (int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

/*

1 L # L D # L D #
2 # L D # L # D D
3
4
5
6
7
8
9
10

*/