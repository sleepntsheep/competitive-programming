#include <bits/stdc++.h>
using namespace std;

int A[21][21];
int V[21][21];

int dx[] = {1, -1,0,0};
int dy[] = {0,0,1,-1};

int main() {
    int n;
    cin >> n;
    int sx, sy;
    cin >> sx >> sy;
    sx--;sy--;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    V[sy][sx] = 1;
    queue<pair<int, int>> q;
    q.push({sy, sx});
    int _max = A[sy][sx];
    while (!q.empty()) {
        int x = q.front().second;
        int y = q.front().first;
        q.pop();

        _max = max(_max, A[y][x]);

        for (int i =0 ; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx <0 || ny < 0 || nx >= n || ny >= n) continue;
            if (A[ny][nx] <= A[y][x]) continue;
            if (A[ny][nx] == 100) continue;
            if (V[ny][nx]) continue;
            V[ny][nx] = 1;
            q.push({ny, nx});

        }
    }

    cout << _max;

    return 0;
}
