#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool magic = true;
    int a[n+5][n+5];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            int k,l;
            for (k = 0; k <= i; k++) {
                for (l = 0; l < j; l++) {
                    if (a[k][l] == a[i][j])
                        magic = false;
                }
            }
        }
    }
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[0][i];
    for (i = 0; i < n; i++) {
        int s = 0;
        for (j = 0; j < n; j++) {
            s += a[i][j];
        }
        if (s != sum)
            magic = false;
        s = 0;
        for (j = 0; j < n; j++) {
            s += a[j][i];
        }
        if (s != sum)
            magic = false;
    }
    int s = 0;
    for (i = 0; i < n; i++) {
        s += a[i][i];
    }
    if (s != sum)
        magic = false;
    s = 0;
    for (i = 0; i < n; i++)
    {
        s += a[n-1-i][n-1-i];
    }
    if (s != sum)
        magic = false;
    if (magic)
        cout << "Yes";
    else
        cout << "No";
    

}