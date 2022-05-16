#include <iostream>
#include <vector>
#define pii pair<int, int>
#define st first
#define nd second
using namespace std;

int i, j, k, n, m, a, b;
int main() {
    cin >> k >> n >> m;
    vector<int> f[n];
    vector<int> c(n, 1e6);
    c[0] = 0;
    for (i = 0; i < m; i++) {
        cin >> a >> b;
        f[a-1].push_back(b-1);
    }

    for (i = 0; i < n; i++) {
        for (int nf : f[i]) {
            if (c[i]+1<c[nf]) {
                c[nf] = c[i]+1;
            }
        }
    }

    for (i = n-1; i >= 0; i--) {
        if (c[i] <= k) {
            cout << i+1;
            break;
        }
    }

}