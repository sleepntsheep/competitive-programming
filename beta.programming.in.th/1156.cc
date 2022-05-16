#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> ts;

void sve(int k, int a, int b, vector<char> vb) {
    if (k == a || k == b) {
        ts.push_back(vb);
        return;
    }
    vb.push_back('W');
    sve(k, a+1, b, vb);
    vb[vb.size()-1] = 'L';
    sve(k, a, b +1, vb);
}

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    vector<char> t;
    sve(k,a,b, t);

    for (vector<char> v:ts) {
        for (char c:v) {
            cout << c << ' ';
        }
        cout << '\n';
    }
}
