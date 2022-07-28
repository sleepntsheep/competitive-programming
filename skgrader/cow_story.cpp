#include <stdio.h>

typedef struct {
	long long b, n;
} d;

int main() {
	int n, i;
	d y[58] = { 0 };
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		y[i].b += y[i-1].b + 1;
		y[i].n = y[i-1].n;
		if (i > 4)
			y[i].n += y[i-4].b;
		if (i > 3)
			y[i].n += y[i-3].n;
	}
	printf("%lld", y[n].b + y[n].n);
}
