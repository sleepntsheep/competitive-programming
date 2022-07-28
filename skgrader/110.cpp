#include <stdio.h>

long long a[100000];
int main() {
    long long q, i;
    scanf("%lld", &q);
    a[1] = 1;
    for (i = 2; a[i-1] <= (2LL << 31); i++)
    	a[i] = i + a[i-1];
    while (q--) {
        long long n, l = 1, r = i - 1, p = 1;
        scanf("%lld", &n);
        if (n == 1) {puts("1"); continue;}
        while (l <= r) {
        	int m = (l+r)/2;
        	if (a[m] <= n) {
				p = m;
				l = m + 1;
			} else {
				r = m - 1;
			}
		}
        if (p * (p+1) / 2 + 1 == n) puts("1");
        else puts("0");
    }
    return 0;
}
