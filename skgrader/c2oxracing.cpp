#include <bits/stdc++.h>
using namespace std;
#define N 1005

char b[N][N];
int s[N][N];

int ok(int i, int j, int w) {
	i--;j--;
	return s[i+w][j+w] 
			- s[i][j+w] 
			- s[i+w][j]
			+ s[i][j] == w*w;
}

int main() {
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	//i
	for (i = 1; i <= n; i++)
		scanf("%s", b[i]+1);
	for (i = 1; i <= n; i++)
	for (j = 1; j <= m; j++)
		b[i][j] -= '0';
	//q
	s[1][1] = b[1][1];
	for (i = 1; i <= n; i++) 
		s[i][1] = s[i-1][1] + b[i][1];
	for (j = 1; j <= m; j++)
		s[1][j] = s[1][j-1] + b[1][j];
	for (i = 2; i <= n; i++) 
	for (j = 2; j <= m; j++)
		s[i][j] = s[i-1][j] + s[i][j-1] 
				- s[i-1][j-1] + b[i][j];
	//
	int a = -1, ai = -1, aj = -1;
	for (i = 1; i <= n; i++)
	for (j = 1; j <= m; j++) {
		int l = 1, r = min(n-i+1, m-j+1);
		while (l <= r) {
			int m = (l + r) / 2;
			if (ok(i, j, m)) {
				l = m + 1;
				//printf("OK m: %d, i: %d, j: %d\n",m,i,j);
				if (m <= a) continue;
				a = m;
				ai = i; aj = j; 
			} else {
				r = m - 1;
			}
		}
	}
	printf("%d %d %d", a, aj, ai);
}
