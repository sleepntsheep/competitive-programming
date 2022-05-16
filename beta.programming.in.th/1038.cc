#include <iostream>
#include <algorithm>

using namespace std;

double mx = -1.0;
int n;
double B[21][21];
double mxs[1 <<21];
int i, j;
int all;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        all |= (1 << i);
    }
    for (i = 0 ; i < n; i++)  {
        for (j = 0 ;j < n; j++) {
            cin >> B[i][j];
            B[i][j] /= 100.0;
        }
    }
    mxs[0] = 1.0;
    for (int i = 0; i <= (1 << n); i++) {
        int cnt = __builtin_popcount(i);
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                mxs[i] = max(mxs[i], mxs[i ^ (1 << j)] * B[cnt-1][j]);
            }
        }
    }

    printf("%.12lf", 100*mxs[(1 << n)-1]);
}
