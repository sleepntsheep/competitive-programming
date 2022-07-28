#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int a = -1;
    while( a ) {
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        printf("%d\n", x);
}
