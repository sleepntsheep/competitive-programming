#include <stdio.h>

int main (){
    int t,n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n == 1)
            puts("2552");
        else if (n & 1)
            puts("2553");
        else
            printf("%d\n",2552 + (n>>1));
    }
    return 0;
}
