#include <bits/stdc++.h>
using namespace std;

int main( ){
	int n;
	cin >> n;

	int z = 0;
	int a[n];
	for (int i = 0 ; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0) z = 1;
	}

	if (!z){
		cout << "Empty sequence";
		return 0;
	}

	// for (int i = 0 ; i < n; i++){
	// 	cout << " o   " << a[i] << "      o ";
	// }

	int mi = -1,
	    ml = -1;
	int max = 0;

	for (int i = 0; i < n; i++){
		if (a[i] < 0) continue;
		for (int l = 1; l <= n - i; l++){
			if (a[i+l-1] < 0) continue;
			int sum = 0;
			// cout << endl;
			// cout << "I | L" << i << l << endl;
			for (int j = i; j < l + i; j++){
				if (j == n) break;
				sum += a[j];
				// cout << ' ' << a[j] << ' ' << j << endl;
			}
			// cout << "   SUM  " << sum << endl;

			if (sum > max){
				max = sum;
				mi = i;
				ml = l;
			}

			//a[i] = max;
		}
	}


	if (max > 0){
		for (int j = mi; j < ml + mi; j++){
			cout << a[j] << ' ';
		}
		cout << endl << max;
	}
	else {
		cout << "Empty sequence";
	}

}
