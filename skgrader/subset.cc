#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
        cout << bitset<n>(i) << '\n';

    return 0;
}
