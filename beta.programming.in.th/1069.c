#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[n];
    memset(a, '\0', sizeof a);
    for (int i =0 ; i < n; i++)
        scanf(" %c", &a[i]);
    a[n] = '\0';
    int m = 0;
    
    int l = strlen(a);
    int ll = -1;
    int lll = l;

    while (1) {
        // printf("%s len : %d\n", a, l);
        for (int i = 0; i < lll - 1; i++) {
            if (a[i] == a[i+1] && a[i] != 'z') {
                // for (int j = i; j < l - 2; j++)
                //     a[j] = a[j+2];
                a[i] = 'z';
                a[i+1] = 'z';
                l -= 2;
                m += 2;
            }
        }
        if (ll == l || l < 1)
        break;
        ll = l;
    }

    l = strlen(a);

    printf("%d\n", l - m);

    if (l - m) {
        for (int i = l - 1; i >= 0; i--) {
            if (a[i] != 'z')
            printf("%c", a[i]);
        }
    }
    else {
        printf("empty");
    }
}