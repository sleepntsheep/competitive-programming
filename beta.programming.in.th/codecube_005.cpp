#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        int z;
        cin >> z;
        cout << z;
        return 0;
    }
    long a[n];
    for (int i =0 ; i< n; i++){
        cin >> a[i];
    }
    long lcm = a[0];
    for (int i = 1; i < n;i++){
        lcm = lcm * a[i] / __gcd(lcm, a[i]);
    }
    cout << lcm;
}