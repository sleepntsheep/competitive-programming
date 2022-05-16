#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int H, W;

bool out(int x, int y) {
    return (x < 0 || y < 0 || x >= W || y >= H);
}

char gr[505][505];
bool v[505][505];

int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);

    cin >> H >> W;
    for (int i =0 ; i < H; i++)
        cin >> gr[i];

    queue<pair<int, int>> q;
    v[0][0] = 1;
    q.push({0, 0});
    int c = 0;

    while (!q.empty()) {
        int size = q.size();
        while(size--) {
            int x = q.front().first;
            int y = q.front().second;
            if (y == H - 1 && x == W - 1) {
                goto de;
            }
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i]; int ny = y + dy[i];
                if (out(nx, ny)) continue;
                if (v[ny][nx]) continue;
                if (gr[ny][nx] == gr[y][x]) continue;
                v[ny][nx] = 1;
                q.push({nx, ny});
            }
        }
        c++;
    }
    cout << -1;
    return 0;
de:;
    cout << c;
    return 0;
}

