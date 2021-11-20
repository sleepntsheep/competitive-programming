#include <bits/stdc++.h>
using namespace std;

int main(){
    long n, res = 0;
    cin >> n;
    int a[n];
    for (int i =0 ; i <n; i++) cin >> a[i];
    int gcd = a[0];
    for (int i = 0; i < n; i++) {
        gcd = __gcd(gcd, a[i]);
    }
    for (int i = 0; i < n; i++){
        res += a[i] / gcd;
    }
    cout << res;
}