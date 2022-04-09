#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    bool e = false;
    string b[n];
    for (int i = 0; i < n; i++) 
        cin >> b[i];
    
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    for (int q = 0; q < n; q++) {
        for (int w = 0; w < n; w++) {
            int c = 0;
            for (int a = 0; a < 4; a++) {
                int x = w + dx[a];
                int y = q + dy[a];
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    if (b[y][x] == 'o'){
                        c++;
                    }
                }
            }
            if (c % 2 != 0) {
                cout << "NO";
                e = true;
                break;
            }
        }
        if (e) break;
    }
    
    if (!e)
    cout << "YES";
}
