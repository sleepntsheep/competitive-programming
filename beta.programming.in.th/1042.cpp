#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int a[k][3];

    for (int i = 0 ; i < k; i++){
        int x, y, r;
        cin >> x >> y >> r;
        a[i][0] = x -r ;
        a[i][1] = y - r;
        a[i][2] = r;
    }

    int max = -1,
        c;

    for (int x = 0; x <= n; x++){
        c = 0;
        for (int i = 0; i < k; i++) {
            if ( x <= a[i][0] + 2 * a[i][2] && x >= a[i][0]) c++;
        }

        if (c > max) max = c;
        //cout << 'x' << x << 'c' << c << endl;
    }

    for (int y = 0; y <= m; y++){
        c = 0;
        for (int i = 0; i < k; i++) {
            if ( y <= a[i][1] + 2 * a[i][2] && y >= a[i][1]) c++;
        }
        if (c > max) max = c;
        //cout << 'y' << y << 'c' << c << endl;
    }

    cout << max;
}
