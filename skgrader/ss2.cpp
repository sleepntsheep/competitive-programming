#include <bits/stdc++.h>

#define N 1005
using namespace std;
#define pii pair<int,int>

int n, k, i, j, x;
int p[N];
int qs[N];
vector<pii> v;
int u[N];
int main() {
	scanf("%d%d", &n, &k);
	for (i = 1; i <= n; i++) 	scanf("%d", p+i);
	for (i = 1; i <= n; i++) 	qs[i] = qs[i-1] + p[i];
	for (i = 1; i < N; i++)
        u[i] = 1e9;
	for (i = 1; i <= n; i++)
        for (j = i; j <= n; j++)
            u[j-i+1] = min(u[j-i+1], qs[j] - qs[i-1]);
	sort(u+1, u+1+n);
	while(k--) {
		scanf("%d", &x);
		int l = 1, r = n+1;
        int ans = 0;
		while (l <= r) {
			int m = (l+r)/2;
			if (u[m] <= x) {
				l = m + 1;
				ans = m;
			} else {
				r = m - 1;
			}
		}
		printf("%d\n", ans);
	}
}
