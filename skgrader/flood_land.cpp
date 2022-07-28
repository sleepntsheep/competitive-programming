#include <bits/stdc++.h>
using namespace std;

string b[20];
string bb[20];

int ny, nx;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

bool out(int x, int y) {
    return (x < 0 || y < 0 || x >= nx || y >= ny);
}

int main() {
    cin >> ny >> nx;
    for (int i = 0; i < ny; i++) {
        cin >> b[i];
        bb[i] = b[i];
    }

    for (int i = 0; i < ny ; i++) {
        for (int j = 0; j < nx;j ++) {
            if (b[i][j] == '.') continue;
            int nc = 0;
            for (int k = 0; k < 4; k++) {
                int ny = i + dy[k]; int nx = j + dx[k];
                if (out(nx, ny)) nc++;
                else if (b[ny][nx] == '.') nc++;
            }
            if (nc >= 3) bb[i][j] = '.';
        }
    }


    for (int i = 0; i < ny ; i++) {
       // cout << bb[i] << '\n';
    }

    int ox = 0, oy = 0, ex = nx-1, ey= ny-1;
    for (int i = 0; i < ny; i++) {
        for (int j = 0; j < nx; j++)
            if (bb[i][j] == 'X') goto oyd;
        oy++;
    }
oyd:;

    for (int j = 0; j < nx; j++) {
        for (int i = 0; i < ny; i++) 
            if (bb[i][j] == 'X') goto oxd;
        ox++;
    }
oxd:;

    for (int j = ny-1; j >= 0; j--) {
        for (int i = 0; i < nx; i++)
            if (bb[j][i] == 'X') goto eyd;
        ey--;
    }
eyd:;

    for (int j = nx-1; j >= 0; j--) {
        for (int i = 0; i < ny; i++)
            if (bb[i][j] == 'X') goto exd;
        ex--;
    }
exd:;

    for (int i = oy; i <= ey; i++) {
        for (int j = ox; j <= ex; j++)
            cout << bb[i][j];
        cout << '\n';
    }

//    printf("%d %d %d %d", ox, oy, ex, ey);

    return 0;
}

