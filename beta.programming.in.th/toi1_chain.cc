#include <stdio.h>

int l, n;
char a[3][1003];
int main() {
    scanf("%d%d", &l, &n);
    int j;
    for (j = 0; j < n; j++) {
        scanf("%s", a[j&1]);
        if (j == 0) continue;
        int c = 0;
        for (int i = 0; i < l; i++) {
            if (a[j&1][i] != a[1-(j&1)][i])  {
#ifdef DEBUG
                printf("%c %c\n", a[j&1][i], a[1-(j&1)][i]);
#endif
                c++;
            }
        }
        if (c > 2) {
#ifdef DEBUG
            printf("%d %d", c,  j);
#endif
            puts(a[1-(j&1)]);
            return 0;
        }
    }
    puts(a[1-(j&1)]);
    return 0;
}
