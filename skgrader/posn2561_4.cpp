#include <iostream>

#define ll long long

/*
 * ABCDABCDA
 * BCDABCDAB
 * CDABCDABC
 * DABCDABCD
 * ABCDABCDA
 *  */
using namespace std;

int main() {
    ll x, y;
    cin >> x >> y;
    char a[4] = { 'A', 'B', 'C', 'D' };

    ll i = 0;
    i += x + y + 2;
    //cout << a[i % 4] << ' ' << a[(i+2) % 4] << endl << ' ' << a[(i+2) % 4] << ' ' << endl << a[(i+2) % 4] << ' ' << a[i % 4] << endl;
    cout << a[(i+2) % 4] << ' ' << a[(i) % 4] << endl << ' ' << a[(i) % 4] << ' ' << endl << a[(i) % 4] << ' ' << a[(i+2) % 4] << endl;

}
