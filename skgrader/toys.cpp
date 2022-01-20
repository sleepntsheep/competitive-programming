#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int w = n * 2 - 1;

    for (int i = 0; i < n; i++) {
        for (int _ = 0; _ < i; _++)
            cout << '*';
        for (int _ = n-i-2; _ >0; _--)
            cout << '_';
        if (n-i == 1) {
            cout << 'O';
        } else {
        for (int _ = 0; _ < n-i; _++)
            cout << '+';
        }
        for (int _ = 0; _ < i; _++)
            cout << '-';
        cout << endl;
    }
}
