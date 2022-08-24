#include <stdio.h>
int n, a[2000][2000],i,j;
int main() {
    scanf("%d", &n);
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for (i=1;i<n;i++) {
        a[i][0] += a[i-1][0];
        a[0][i] += a[0][i-1];
    }
    for (i=1;i<n;i++)
        for(j=1;j<n;j++)
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    for (i=0;i<n;i++) {
        for(j=0;j<n;j++)
            printf("%d ", a[i][j]);
        puts("");
    }
}

