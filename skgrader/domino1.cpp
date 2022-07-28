#include <stdio.h>

/* 
 * 1 - 1
 * 2 - 2
 insert 1 of | at the front, or insert  -- at the front ( including | | ) will result in repeated case
 	     |  			-- 			    | | 

 * dp[n] = dp[n-1] + dp[n-2]
 * = fibo
 * */
#define N 95
unsigned long long p[N] = { 1, 1 };
int main() {
	for (int i = 2; i < N; i++)
		p[i] = p[i-1] + p[i-2];
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%llu\n", p[n]);
	}
}

