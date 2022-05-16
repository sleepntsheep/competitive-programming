#include <bits/stdc++.h>
using namespace std;
#define ll long long

// X^1, x^2, x^4, x^8...
ll pown[40];

int main() {
    int nn;
    cin >> nn;
    while(nn--){
        int x, y, n;
        cin >> x >> y >> n;
        pown[0] = x;
        for (int i = 1; i <= 31; i++)
            pown[i] = (pown[i-1] * pown[i-1]) % n;

        ll res = 1;
        for (int i = 0; i <= 31; i++) {
            if (y & (1 << i)) {
                res *= pown[i];
                res %= n;
            }
        }
        cout << res << endl;
    }

    return 0;
}
