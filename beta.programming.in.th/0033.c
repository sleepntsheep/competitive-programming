#include <stdio.h>
#include <unistd.h>

int c[10005];
int ma;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        c[a]++;
        if (c[a] > ma)
            ma = c[a];
    }
    
    for (int i = 0; i <= 10000; i++)
    {
        if (ma == c[i])
            printf("%d ", i);
    }

}
