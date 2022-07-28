#include <stdio.h>

int main() {
    long long q, a, b;
    scanf("%lld", &q);
    while(q--) {
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", a+b);
    }
    return 0;
}
