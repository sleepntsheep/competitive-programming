#include <endian.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n+2];
		a[n+1] = -n-1;
		a[n+2] = -n-2;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int c = 0, d =0 ;
		bool flag = true;
		for (int i =0 ; i < n; i++) {
			bool td= false;
			if (i < n - 1) {
				if (a[i] == a[i+1]) {
					a[i] = -i;
					a[i+1] = -i-1;
					c++;
				}
			} if (i < n - 2) {
				if (a[i] != a[i+1] & a[i+1] != a[i+2] & a[i+2] != a[i]) {
				a[i] = -i;
				a[i+1] = -i-1;
				a[i+2] = -i-2;
				td = true;
				c++;
				}
			}
			if (i >= 1) {
				if (a[i] == a[i-1]) {
					a[i] = -i;
					a[i-1] = -i+1;
					c++;
				}
			}
			if (i >= 2) {
				if (a[i] != a[i-1] & a[i-1] != a[i-2] & a[i-2] != a[i] && (!td)) {
					a[i] = -i;
					a[i-1] = -i+1;
					a[i-2] = -i+2;
					c++;
				}
			}
			if (a[i] != 0) {
				flag = false;
				d++;
			}
		}

		cout << (flag ? "Yes" : "No") << endl << c << endl;
		if (!flag) 
			cout << d << endl;
	}


}