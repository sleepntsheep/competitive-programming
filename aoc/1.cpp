#include <bits/stdc++.h>
using namespace std;

int main() {
    int ln, n;
    cin >> ln;
    int c = 0; 
    while (1) {
        cin >> n;
        if (n > ln) {
            c++;
        }

        ln = n;
    cout << endl << c << endl;
    }
}
