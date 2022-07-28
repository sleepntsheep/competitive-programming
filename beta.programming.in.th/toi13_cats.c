#include <stdio.h>
#define N 2000005
int a[N];

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int main() {
    int n, i, j, maxh = - 1, l, r, ok, mid, ans;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", a+i);

    for (i = 0; i < n; i++)
        maxh = MAX(maxh, a[i]);

    l = 0, r = maxh;
    while (l <= r) {
        /* mid = cage size to test */
        int mid = l + (r - l) / 2;
        int ok = 1;
        for (i = 0; i < n - 1; i++) {
            /* cage can carry, skip this */
            if (a[i] <= mid) continue;
            for (j = i+1; j < n; j++) {
                if (a[j] <= mid) continue;
                break;
            }
            if (a[i] != a[j]) {
                ok = 0;
                break;
            }
            i = j;
        }
        if (ok) {
            r = mid - 1;
            ans = mid;
        }
        else  {
            l = mid + 1;
        }
    }

    printf("%d", ans);

    return 0;
}
