#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int width = n, height = n;

    int width_mid = width / 2;
    int height_mid = height / 2;
    if (n % 2 == 0){
        width--;
        height_mid--;
    }

    for (int i = 0; i < height; i++ ) {
        if (n % 2 == 0 && i == height / 2) height_mid++;
        for (int c = 0; c < width; c++){
            if (c == height_mid - i || c == i - height_mid || (width - c - 1) == height_mid - i || (width-c-1) == i - height_mid) cout << '*';
            else cout << '-';
        }       
        cout << endl;
    }

    return 0;
}
