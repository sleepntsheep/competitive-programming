#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int w = 2* n -1;

    for (int i = 1; i < n; i++) {
        for (int _ = 0; _ < i; _++) cout << '*';
        for (int _ = 0; _ < (n-i)*2-1; _++) cout << '.';
        for (int _ = 0; _ < i; _++) cout << '*';
        cout << endl;
    }

    for (int i = 0; i < w; i++) cout << '*';

    cout << endl;
    for (int i = n - 1; i > 0; i--) {
        for (int _ = 0; _ < i; _++) cout << '*';
        for (int _ = 0; _ < (n-i)*2-1; _++) cout << '.';
        for (int _ = 0; _ < i; _++) cout << '*';
        cout << endl;
    }


}
