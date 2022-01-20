#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n+1];
    int y[n+1];
    int result_index = 0;

    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    x[n] = x[0];
    y[n] = y[0];

    double max = -1;

    for (int a = 0; a <= n; a++){
        for (int s = 0; s <= n; s++){
            if (s == a) continue;
            for (int d = 0; d <= n; d++){
                if (d == a || d ==s) continue;
                double result = x[a] * y[s] + x[s] * y[d] + x[d] * y[a] - (y[a] * x[s] + y[s] * x[d] + y[d] * x[a]);
                if (result < 0) result = - result;
                result = result / 2;
                if (result > max) max = result;
            }
        }
    }

    cout << fixed;
    cout << setprecision(3);
    cout << max << endl;

    return 0;
}
