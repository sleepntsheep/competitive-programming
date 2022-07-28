#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int cpr(const void *a, const void *b) {
    return *(uint64_t*)a > *(uint64_t*)b;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char *argv[]) {
    int t = 5, n;
    uint64_t *arr, *arr2;
    while (t--) {
        scanf("%d", &n);
        arr = (uint64_t *) calloc(n+1, sizeof (uint64_t));
        arr2 = (uint64_t *) calloc(n+1, sizeof (uint64_t));
        for (int i = 0, a, b; i < n - 1; i++) {
            scanf("%d%d", &a, &b);
            if (a < b) swap(&a, &b);
            arr[i] = 100000*a+b;
        }
        for (int i = 0, a, b; i < n - 1; i++) {
            scanf("%d%d", &a, &b);
            if (a < b) swap(&a, &b);
            arr2[i] = 100000*a+b;
        }
        qsort(arr, n, sizeof(uint64_t), cpr);
        qsort(arr2, n, sizeof(uint64_t), cpr);
        for (int i = 0; i < n; i++) {
            //printf("%lu %lu\n", arr[i], arr2[i]);
            if (arr[i] != arr2[i]) {
                putc('N', stdout);
                goto done;
            }
        }
        putc('Y', stdout);
        free(arr);
        free(arr2);

        done:;
    }
    return 0;
}
