#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, mc = 0, mxc = 0;
    n--;
    cin >> a;
    int max = a;
    int min = a;
    while (n--) {
        cin >> a;
        if (a > max) {
            max = a;
            mxc++;
        } else if (a < min) {
            min = a;
            mc++;
        }
    }
    cout << mxc << ' ' << mc;
}
