#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxH = 0;
    int w= 0;
    for (int i = 0; i < n; i++){ 
        int h;
        cin >> h;
        a[i] = h;
        w += h;
        if (h > maxH)
            maxH = h;
    }

    int offset = 0;

    vector<string> board(maxH, string(w*2, '.'));

    for (int i = 0; i < n; i++) {
        int height = a[i];
        for (int j = 0; j < height; j++) {
            board[maxH-1-j][offset+j] = '/';
        }
        offset += 2*a[i];
    }
    offset = 0;
    for (int i = 0; i < n; i++) {
        int height = a[i];
        for (int j = height - 1; j >= 0; j--) {
            board[maxH-1-j][offset+height+height-j - 1] = '\\';
        }
        offset += 2*a[i];
    }

    for (string line : board) {
        cout << line << endl;
    }
        
}
