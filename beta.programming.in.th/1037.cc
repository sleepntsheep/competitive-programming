#include <iostream>
#include <queue>
using namespace std;

char B[51][51];

//empty - .
//flood - *
//rock  - X
//beaver- D
//color - S
//

int dx[] = {-1, 1, 0, 0};
int dy[] = {0 , 0,-1, 1};
int y, x;

int isInBoard(int py, int px){ 
    if (px >= x || py >= y || px < 0 || py < 0) return 0;
    return 1;
}

int main() {

    queue<pair<int,int>> Q;
    queue<pair<int,int>> W;
    cin >> y >> x;

    int dty, dtx;
    for (int i = 0; i < y; i++) 
        for (int j =0 ;j < x; j++) {
            scanf(" %c", &B[i][j]);
            if (B[i][j] == 'S') 
                Q.push(make_pair(i, j));
            else if (B[i][j] == '*')
                W.push(make_pair(i, j));
        }

    int t=0;
    while(1){ 
        int size = W.size();
        while (size--) {
            pair<int, int> P = W.front();
            W.pop();
            for (int i = 0 ; i < 4; i ++) {
                int nx = P.second + dx[i];
                int ny = P.first + dy[i];
                if (!isInBoard(ny,nx)) continue;
                if (B[ny][nx] == '.') {
                    W.push(make_pair(ny,nx));
                    B[ny][nx] = '*'; 
                }
            }
        }

        for (int i =0; i < y; i++) 
            for (int j =0; j< x; j++) 
                if (B[i][j] == '*') 
                    for (int k = 0; k < 4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (!isInBoard(ny, nx)) continue;

                        if (B[ny][nx] == '.')
                            B[ny][nx] = 'u';
                    }
        for (int i =0; i < y; i++) 
            for (int j = 0; j< x; j++) 
                if (B[i][j] == 'u')
                    B[i][j] = '*';

        if (Q.empty()) {
            cout << "KAKTUS";
#ifdef DEBUG
            for (int i =0; i < y; i++)  {
                for (int j = 0; j< x; j++) 
                    cout << B[i][j];
                cout << '\n';
            }
#endif
            return 0;
        }
#ifdef DEBUG
        cout << "\n------------\n";
#endif

        size = Q.size();
        while (size--) {
            pair<int, int> P = Q.front();
            Q.pop();
#ifdef DEBUG
            cout << P.first << ' ' << P.second << endl;
#endif

            for (int i = 0 ; i < 4; i ++) {
                int nx = P.second + dx[i];
                int ny = P.first + dy[i];
                if (!isInBoard(ny,nx)) continue;
#ifdef DEBUG
                printf("%d %d %c\n", ny, nx, B[ny][nx]);
#endif
                if (B[ny][nx] == '.') {
                    Q.push(make_pair(ny,nx));
                    B[ny][nx] = 'S'; 
                }
                if (B[ny][nx] == 'D') {
                    cout << t+1;
                    return 0;
                }
            }
        }

#ifdef DEBUG
        for (int i =0; i < y; i++)  {
            for (int j = 0; j< x; j++) 
                cout << B[i][j];
            cout << '\n';
        }
#endif
        t++;
    }
    return 0;
}
