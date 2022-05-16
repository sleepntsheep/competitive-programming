#include <iostream>

using namespace std;

int n, m;
int b[101][101];
int p[101][101];

int prefix(int x, int y) {
    if (x < 0 || y < 0 || x > n || y > n) return 0;
    if (p[y][x] == 0)
        p[y][x] = !!b[y][x] + prefix(x, y-1) + prefix(x-1, y) - prefix(x-1, y-1);
    return p[y][x];
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        b[y][x]++;
    }

    prefix(n, n);

    for (int i = 0 ; i < n; i++) {
        for (int  j =0 ; j < n;  j++){
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << endl;
    for (int i = 0 ; i < n; i++) {
        for (int  j =0 ; j < n;  j++){
            cout << p[i][j] << ' ';
        }
        cout << '\n';
    }
}

/*
 *
 * 0 0 0 0 
 * 0 1 2 1
 * 0 1 0 1
 * 0 1 0 1
 * 
 * */
