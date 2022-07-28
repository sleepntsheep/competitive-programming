#include <bits/stdc++.h>
using namespace std;

bool p[2000000010];

int palin(int a) {
    string s = to_string(a);
    return s == reverse(s.begin(), s.end());
}

int main() {
    long a, b;
    cin >> a >> b;
    int c = 0;

    for (long i = 2; i < (b >> 1); i++) {
        if (p[i] == 1) continue;
        for (long j = 2; j*i < b; j++) {
            p[i] = 1;
        }
    }

    for (int i = a; i < b; i++) {
        if (!p[i] && palin(i)) c++;
    }

    cout << c;

    return 0;
}
