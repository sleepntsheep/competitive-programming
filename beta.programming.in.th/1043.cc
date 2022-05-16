#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    while (n--) {
        long long a;
        cin >> a;

        for (int i = 2; i <= 1e4; i++) {
            long long b = i*i;
            for (int k = 2; b <= a; k++) {
                if (b == a) {
                    cout << k << '\n';
                    goto done;
                }
                b *= i;
            }
        }
        cout << "NO\n";
        done:;
    }

    return 0;
}
