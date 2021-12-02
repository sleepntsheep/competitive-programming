#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char* tobinary(int n, int k) {
    char buffer[k];
    itoa(n, buffer, 2);
    return buffer;
}

int main() {
    int k, n;
    scanf("%d%d", &k, &n);
    int i = 1;
    int result = 0;
    while (i < n - 1) {
        char a[k],
            b[k];
        a = tobinary(i, k);
        b = tobinary(i + 1, k);

        for (int id = 0; id < k; id++) {
            if (a[id] != b[id])
                result++;
        }

        i++;
    }

    printf("%d", &result);
}