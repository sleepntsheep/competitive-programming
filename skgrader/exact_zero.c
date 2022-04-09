#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <  n;i ++) {
        unsigned int b = 0;
        unsigned int a;
        scanf("%u", &a);
        
        unsigned int r = 2147483648 + 2147483648 - a;
        printf("%u\n", r);
    }

}
