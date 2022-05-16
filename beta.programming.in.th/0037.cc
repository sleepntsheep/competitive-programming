#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, l, k, c;
	cin >> n >> m >> l >> k >> c;
	int costn = l * c * k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int a;
			cin >> a;
			costn += a;
		}
	}
	int result = ceil(float(costn) / float(c));
	cout << result;
}