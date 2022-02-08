#include <bits/stdc++.h>
using namespace std;

int main() {
    int res[10000] = { 0 };
    int c = 0;
    int i = 0;
    while (1 ) {
        int a;
        cin >> a;
        if (a == -1) break;
        res[i] += a;
        res[i-1] += a;
        res[i-2] += a;
        i++;
    }
    for (int in = 1; in <= i; in++){
        if (res[in] > res[in-1])
            c++;
        
    }
    cout << c;
}