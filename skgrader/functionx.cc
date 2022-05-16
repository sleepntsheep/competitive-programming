#include <bits/stdc++.h>
using namespace std;
int functionx(int n) {
    if (n == 1) return 2552;
    if (n & 1) {
        return 2553;
    }
    else {
        return 2553 + (n-2)/2;
    }
}

int main (){
    int t;
    cin >> t;
    for (int i = 1, n; i <= t; i++) {
        cin >> n;
        cout << functionx(n) << '\n';
    }
}
