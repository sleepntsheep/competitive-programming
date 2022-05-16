#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long n;
        cin >> n;
        if (n <= 2) {cout << "1\n";continue;}
        int rt = sqrt(n*2);
        if (rt * (rt+1) / 2 + 1 == n) cout << 1;
        else cout << 0;
        cout << '\n';
    }
    return 0;
}
