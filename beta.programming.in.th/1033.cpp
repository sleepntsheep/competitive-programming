#include <iostream>
using namespace std;

char B[105][105];

int X[5], Y[5], S[5];
int n;

void mv(int t, char d) {
    int ox = X[t], oy = Y[t]; // old pos
    int nx = ox, ny = oy; // new pos
    if (d == 'N') {
        ny--;
    } else if (d == 'E') {
        nx++;
    } else if (d == 'S') {
        ny++;
    } else {
        nx--;
    }
    if (nx < 0 || ny < 0 || nx >= n || ny >= n) { // out of board
        return;
    }
    else if (B[ny][nx] > 0) { // overlap
        return;
    }
    else {
        B[ny][nx] = t; // update board
        B[oy][ox] = -t; // for scoring 
        X[t] = nx; Y[t] = ny; // update pos
    }
}

void printboard() {
    {int i, j; for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << static_cast<int>(B[i][j]) << ' ';
        }
        cout << '\n';
    }}
}

int main() {
    int k;
    cin >> n >> k;
    X[1] = n-1; Y[1] = 0;
    X[2] = n-1; Y[2] = n-1;
    X[3] = 0;   Y[3] = n-1;
    X[4] = 0;   Y[4] = 0; 
    for (int i = 1; i < 5; i++)
        B[Y[i]][X[i]] = i;
    char O[5][k];
    {int i, j; for (i = 1; i < 5; i++) {
        for (j = 0; j < k; j++) {
            cin >> O[i][j];
        }
    }}
    {int i, j; for (i = 0; i < k; i++) {
        for (j = 1; j < 5; j++) {
            mv(j, O[j][i]);
        }
    }}

    // printboard();

    {int i, j; for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (B[i][j] == 0) {cout << "No"; return 0;}
            S[abs(B[i][j])]++;
        }
    }}

    int mx = -1, mc = 0;
    for (int i = 1; i < 5; i++)
        mx = max(mx, S[i]);
    for (int i = 1; i < 5; i++)
        if (mx == S[i])
            mc++;
    cout << mc << ' ' << mx << endl;
    for (int i = 1; i < 5; i++)
        if (mx == S[i])
            cout << i << endl;

    return 0;

}