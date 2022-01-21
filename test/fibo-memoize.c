#include <stdio.h>
#include <stdint.h>
#define ll unsigned long long

ll mem[1000001];

ll fibo(int n) {
    if (mem[n] != 0) return mem[n];
    mem[n] = fibo(n-2) + fibo(n-1);
    return mem[n];
}

int main() {
    mem[1] = 1;
    mem[2] = 1;
    int n;
    scanf("%d", &n);
    printf("%llu", fibo(n));
}
