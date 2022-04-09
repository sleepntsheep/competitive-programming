#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    int c = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i+1 ; j< n; j++){
            if (i == j) continue;
            int f = 0;
            if (a[i][0] == a[j][0]) f = 1;
            else if (a[i][1] == a[j][1]) f = 1;
            else if (a[i][2] == a[j][2]) f = 1;

            c += f;

        }
    }

    cout << c ;
}
