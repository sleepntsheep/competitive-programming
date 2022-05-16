#include <iostream>

using namespace std;

int main() {
	int n;
	int a, b, c, sa, sb, sc;
	cin >> n;
	while (n--) {
			cin >> a >> b >> c;
			sa += a; sb += b; sc += c;
	}
	if (sa == 0 & sb == 0 & sc == 0)
		cout<< "YES";
	else 
		cout <<"NO";

}