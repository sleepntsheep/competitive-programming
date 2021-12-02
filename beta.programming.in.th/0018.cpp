#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int ded[n+1] = { 0 };

	int index = 2;
	int dedi = 0;
	int result;
	while (dedi < m){
		for (int i = index; i <= n ; i++) {
			if (i % index != 0) continue;
			if (!ded[i]) {
				ded[i] = 1;
				dedi++;
				result = i;
			}
		}
		while (ded[index]) {
			index++;
		}
	}
	cout << result;
	return 0;
}