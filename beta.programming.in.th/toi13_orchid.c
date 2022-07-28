#include <stdio.h>

int* bs_up(int val, int *s, int *e) {
    while (s <= e) {
        int *mid = s + (e - s)/2;
        if (*mid <= val) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return s;
}

int main() {
    int n, lp = -1, a;
    scanf("%d", &n);
    int l[n+5];
    int *tmp;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (!i || a >= l[lp])
            l[++lp] = a;
        else if ((tmp = bs_up(a, l, l+lp)))
            *tmp = a;
    }

    printf("%d", n-lp-1);

    return 0;
}

