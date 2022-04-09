#include <stdio.h>
#define ll unsigned long long

int main() {
    int n;
    scanf("%d", &n);
    ll a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%llu", c);
}
