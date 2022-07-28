#include <stdio.h>

#define N 105
int main() {
	char a[N] = { 0 }, b[N] = { 0 };
	scanf("%s%s", a+1, b+1);
	int lcs[N][N] = { 0 };
	for (int i = 1; i < N; i++)
	for (int j = 1; j < N; j++)
		if (a[i] && a[i] == b[j])
			lcs[i][j] = lcs[i-1][j-1]+1;
	int ans = 0;
	for (int i = 1; i < N; i++)
	for (int j = 1; j < N; j++)
		if (lcs[i][j] > ans) ans = lcs[i][j];
	printf("%d", ans);
}
