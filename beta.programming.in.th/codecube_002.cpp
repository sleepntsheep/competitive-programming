#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, res, rem;
    cin >> a >> b;
    if (a == 0 || b == 0){
        if (a > b) cout << a;
        else cout << b;
        return 0;
    }

    while (a % b > 0 ){
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << b;
    return 0;

}