#include <bits/stdc++.h>
using namespace std;

int A[1550];

map<int, long long> mp;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    long long s = 0;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            int a = A[i], b = A[j];
            mp[a+b]++;
        }

    for (auto const &x : mp) {
        s += x.second * mp[m-x.first];
    }

    cout << s;

    return 0;
}
