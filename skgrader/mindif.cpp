#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    set<int> b;

    for (int i = 0; i < m; i++) {
        b.insert(a[i]);
    }

    for (auto i = b.begin(); i != b.end(); i++)
        cout << *i << ' ';
}
