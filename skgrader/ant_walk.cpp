#include <bits/stdc++.h>
using namespace std;

int b[1005][1005];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i <= m; i++) b[0][i] = 1;
	for (int i = 0; i <= n; i++) b[i][0] = 1;
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++)
		b[i][j] = (b[i][j-1] + b[i-1][j]) % 558829;
	cout << b[n][m];
}

