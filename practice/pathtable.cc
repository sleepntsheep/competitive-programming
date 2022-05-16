#include <bits/stdc++.h>
using namespace std;

int board[505][505];

// _max[i][j] mean maximum distance from 0, 0 to i, j;
int _max[505][505];

int dfs(int x, int y) {
    if (!x && !y) return _max[0][0] = board[0][0]; // x and y is 0
    if (!x) return _max[y][x] = dfs(x, y - 1) + board[y][x]; // x is 0
    if (!y) return _max[y][x] = dfs(x - 1, y) + board[y][x]; // y is 0
    return _max[y][x] = max(dfs(x - 1, y), dfs(x, y - 1)) + board[y][x];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    cout << dfs(m, n);

    return 0;
}
