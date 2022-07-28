#include <stdio.h>

/* 
 * 1 - 2
 * 2 - 8

 * dp[n] = dp[1] * dp[n-1] + dp[2] * dp[n-2] / 2 ( to avoid repeated case from dp[1]  )
 * = fibo
 * */
#define M 13345
#define N 100005
int p[N] = { 1, 2 };
int main() {
	for (int i = 2; i < N; i++)
		p[i] = (2 * p[i-1] + 4 * p[i-2]) % M;
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", p[n]);
	}
}

