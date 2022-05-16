#include <bits/stdc++.h>
using namespace std;

int q;
string s;
stack<string> ss;

int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s;
        if (s == "READ") {
            cout << ss.top() << '\n';
            ss.pop();
        }
        else {
            ss.push(s);
        }
    }

    return 0;
}

