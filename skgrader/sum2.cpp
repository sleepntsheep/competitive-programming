#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> mem;

int of(vector<vector<int>> a, int i, int j) {
    int sum = 0;
    //for (int k = 0; k <= i; k++){
    //    for (int l = 0; l <= j; l++) {
    //        sum += a[k][l];
    //    }
    //}

    if (i >= 1) {
        if (mem[i-1][j] == 0) {
            mem[i-1][j] = of(a, i-1, j);
        }
        sum = mem[i-1][j] + a[i][j];
        mem[i][j] = sum;
    } else if (j >= 1) {
        if (mem[0][j-1] == 0) {
            mem[0][j-1] = of(a, 2, j-1);
        }
        sum = mem[2][j-1] + a[i][j];
        mem[i][j] = sum;
    }
    else {
        sum = a[i][j];
        mem[i][j] = sum;
    }

    return sum;
}

int main(){
    int n;
    cin >> n;
    mem.resize(n);
    fill(mem.begin(), mem.end(), vector<int>(n, 0));

    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    mem[0][0] = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << of(a, i, j) << ' ';
        cout << endl;
    }
    cout << " ______ " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mem[i][j] << ' ';
        cout << endl;
    }
}

