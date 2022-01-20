#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int y = 0;
    int m = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 120 < 60) {
            y++;
        } else if (a[i] % 120 != 60) {
            m++;
        }
    }
    cout << y << " " << m << endl;
    if (y > m) {
        cout << "Joy";
    } else if (y < m) {
        cout << "Jaew";
    } else {
        cout << "Draw";
    }
}