#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        int c;
        cin >> c;

        for (int j = 0; j < c; j++) {
            for (int w = 1; w < 20 - j; w++)
                cout << ' ';
            cout << '/';
            for (int w = 0; w < j; w++)
                cout << ' ';
            cout << '\n';
        }

        for (int j = c - 1; j >= 0; j--) {
            for (int w = 1; w < 20 - j; w++)
                cout << ' ';
            cout << '\\';
            for (int w = 0; w < j; w++)
                cout << ' ';
            cout << '\n';
        }

    }

}
