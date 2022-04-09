#include <iostream>
#include <cmath>

using namespace std;

int n;
int a[50001];
long long res;

int main() {
	cin >> n;

	for (int i = 0 ;i < n; i ++) 
		cin >> a[i];

	for (int i = 0; i < n; i++)
		for (int j  = 0; j <n; j++)
			res += abs(a[i] - a[j]);
	res >>= 1;

	res %= 49999;

	for (int i = 1; i <= n-2; i++) {
		res = (res * i) % 49999;
	}

	cout << res;
}
