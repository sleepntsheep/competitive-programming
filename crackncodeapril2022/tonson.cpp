#include <iostream>

using namespace std;

int n, m, i, j, k;
int main() {
	cin >> n >> m;
	int a[n];
	// int min = 1e9;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		// min = (min < a[i]) ? min : a[i];
	}
	for (k = 1; k <= m; k++) {
		int c = 0;
		for (i = 0; i < n ; i++) {
			int z = 0;
			while (z <= a[i]) {
				z += k;
				c++;
			}
		}
		cout << c - 5 << endl;
	}


}