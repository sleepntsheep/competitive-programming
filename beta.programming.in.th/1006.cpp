#include <bits/stdc++.h>
using namespace std;

void shiftr(int *a){
	int temp0 = a[0];
	a[0] = a[3];
	a[3] = a[2];
	a[2] = a[1];
	a[1] = a[0];
}

int main() {
	int frontl[4] = { 2, 4, 3, 5 },
		upl[4] = { 2, 1, 5, 6 },
		sizel[4] = { 1, 4, 6, 3 };

	int data[4][4] = {
		{ 5, 5, 5, 5 },
		{ 1, 1, 1, 1 },
		{ 3, 2, 4, 5 },
		{ 6, 6, 6, 6 }
	};

	int n;
	cin >> n;
	string a[n];
	for (int i = 0 ; i < n; i ++ ) {
		cin >> a[i];
		for (int j = 0; j < a[i].length(); j++){
			if (a[i][j] == 'F') {
				shiftr(upl);
				if (frontl[5])
			}

		}
	}

}