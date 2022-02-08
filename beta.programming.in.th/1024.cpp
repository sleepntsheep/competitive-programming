#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int all[n];
    for (int i = 0; i < n; i++) cin >> all[i];

    int mindif = 1e9;
    int lb, lc;

    for (int b = 1; b < n - 1; b++){
        for (int c = b + 1; c < n; c++){
            int max = -1,
                min = 1e9;
            int A = 0, B = 0, C = 0;
            for (int i = 0; i < b - 1; i++) A += all[i];
            for (int i = b - 1; i < c - 1; i++) B += all[i];
            for (int i = c - 1; i < n; i++) C += all[i];

            if (A > max) max = A;
            if (B > min) max = B;
            if (C > max) max = C;

            if (A < min) min = A;
            if (B < min) min = B;
            if (C < min) min = C;

            if (max - min < mindif) {
                mindif = max - min;
                lb = b;
                lc = c;
            }
        }
    }

    cout << lb << ' ' << lc;

    return 0;
}
