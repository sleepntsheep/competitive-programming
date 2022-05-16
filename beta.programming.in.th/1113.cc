#include <bits/stdc++.h>
using namespace std;

int n, k;
map <long long, long long> m;
long long mx;

int main() {
    cin >> n >> k;
    string s;
    cin >> s;

    long long sum = 0;

    m[0] = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'O') sum++;
        else if (s[i] == 'R') sum -= k;
        if (m[sum] || !sum) mx = max((long long)i - m[sum] + 1, mx);
        else m[sum] = i +1;
    }

    cout << mx;

    return 0;
}
