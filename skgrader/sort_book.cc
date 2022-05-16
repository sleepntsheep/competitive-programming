#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

map<string,int> ma, mb;
int main() {
    int n;
    cin >> n;
    vector<string> a(n), b(n);
    int ia = 0, ib = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mb[a[i]] = i;
    }

    while (!a.empty()) {
        string s = a[0];
        a.erase(a.begin());

    }
}
