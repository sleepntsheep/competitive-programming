#include <stdio.h>
#include <queue>
#include <utility>

char B[2005][2005];
int n, m, c, nx, ny;
int d8x[] = {-1,0,1,-1,1,-1,0,1};
int d8y[] = {-1,-1,-1,0,0,1,1,1};

int main() {
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        scanf("%s", B[i]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == '1') {
                std::queue<std::pair<int, int>> b;
                b.push({i, j});
                c++;
                while (!b.empty()) { 
                    int x = b.front().second;
                    int y = b.front().first;
                    b.pop();
                    for (int k = 0; k < 8; k++) {
                        int ny = y+d8y[k];
                        int nx = x+d8x[k];
                        if (B[ny][nx] == '0' || ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
                        B[ny][nx] = '0';
                        b.push({y+d8y[k], x+d8x[k]});
                    }
                }
            }
        }
    }

    printf("%d", c);

    return 0;
}

