#include <bits/stdc++.h>
using namespace std;

int ptgr(pair<int, int> xy1, pair<int, int> xy2) {
    return pow(xy2.first-xy1.first, 2) + pow(xy2.second - xy1.second, 2);

}

int main() {
    int n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

}
