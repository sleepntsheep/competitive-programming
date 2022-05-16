#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i =0 ; i < a.length; i++){
        cnt += (a[i] == b[i]) ? 0 : 1;
    }

    cout << cnt;
    return 0;
}