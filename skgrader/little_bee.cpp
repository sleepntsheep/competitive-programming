#include <stdio.h>

long long c[55], a, b;

long long f(int n) {
	if (n < a) return 0;
	if (c[n]) return c[n];
	return c[n] = f(n-1) + f(n-2);
}

int main() {
	scanf("%lld%lld", &a, &b);
	if (a && b) c[a] = 1;
	printf("%lld", f(b));
}
