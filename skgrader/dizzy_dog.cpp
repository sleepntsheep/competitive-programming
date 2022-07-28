#include <stdio.h>

typedef struct {
	unsigned long long u, l, r;
} a;

int main() {
	int n;
	scanf("%d", &n);
	a p[55] = { 1,0,0,1,1,1 };
	for (int i = 2; i <= n; i++) {
		p[i].u += p[i-1].u + p[i-1].l + p[i-1].r;
		p[i].l += p[i-1].u + p[i-1].l;
		p[i].r += p[i-1].u + p[i-1].r;
	}
	printf("%llu", p[n].u+p[n].l+p[n].r);
}
