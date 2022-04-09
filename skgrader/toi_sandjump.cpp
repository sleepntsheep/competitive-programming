#include <stdio.h>

int main()
{
    int r, s, t, n, d;
    scanf("%d%d%d%d", &r, &s, &t, &n);
    int z = s + t;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        if (d <= r){
            printf("no\n");
        } else {
            d -= r;
            d = d % z;
            if (d <= s){
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }
    return 0;
}