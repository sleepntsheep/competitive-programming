#include <bits/stdc++.h>
using namespace std;

int A[55][55];
int S[55][55];
int H, W;

set<int> si;

int aa(int x, int y) {
    if (!x && !y) return S[0][0] = A[0][0];
    if (!x) return S[y][0] = A[y][0] + aa(0,y-1);
    if (!y) return S[0][x] = A[0][x] + aa(x-1,0);
    return S[y][x] = A[y][x] + aa(x-1, y-1);
}

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> H >> W;
    for (int i=  0;  i <  H; i++){ 
        for (int j = 0 ;j  < W; j++){
            cin >> A[i][j];
        }
    }
    aa(W-1, H-1);

    for (int i = 0; i < H; i++) {

    }

    return 0;
}

