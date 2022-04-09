#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int p[26];
int c[100];
char s[500];

int arrlen(int *arr) {
    int i;
    for (i = 0; ; i++ )
        if (arr[i] == 0) break;
    return i;
}

int compare(const void * a, const void * b) {
    return *(int*) b - *(int*)a;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int  rr = 0;
        scanf("%s", s);
        int l = strlen(s);
        memset(c, 0, sizeof c);
        memset(p, 52, sizeof p);
        for (int i = 0; i < l; i++) {
            if (s[i] > 'Z')
                s[i] -= 32;
            c[s[i] - 'A']++;
        }
        //for (int i = 0 ;i < 100; i++)
        //    printf("%d ", c[i]);
        qsort(c, 100, sizeof (int), compare);
        int ll = arrlen(c);
        for (int i = 0 ;i < ll; i++)
            rr += (26 - i) * c[i];

        printf("%d\n", rr);
    }
}

