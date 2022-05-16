#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int a[30005];

int cmpfnc(const void *a, const void *b) {
    return (*(int*) a - *(int*) b);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);
    if ( n < 3 ) {printf("%d", n); return 0;};

    qsort(a, n, sizeof(int), cmpfnc);

    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
        int count = 0;
        for (int j = i + 2; j < n; j++) {
            // count++ until can't make triangle
            if (a[i]+a[i+1]<=a[j])break;
            count++;
        }
        ans = MAX(ans, count+2); // +2 is for first 2 
    }

    printf("%d", ans);

    return 0;
}
