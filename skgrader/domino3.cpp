#include <stdio.h>

/* 
 * 1 - 2
 * 2 - 8
 * like domino1
 * dp[n] = dp[n-1] * dp[n-2]
 * */
#define M 2133134135
#define N 100005
long long p[N] = { 2, 2 };
int main() {
	for (int i = 2; i < N; i++)
		p[i] = (p[i-1] + p[i-2]) % M;
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", p[n]);
	}
}

