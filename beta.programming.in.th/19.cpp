#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v1[n];
    int v2[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    int min = 200000000;

    do {
        int r, z, x;
        z = 1; x = 0;
        for (int j = 0; j < n; j++){
            z *= v1[j];
            x += v2[j];
        }
        r = (z > x) ? z - x : x - z;
        if (r < min) {
            min = r;
            //cout << v1 << 'v' << v2 << endl;
        }

        
    } while (next_permutation(v1, v1+n) || next_permutation(v2, v2+n));

    cout << min << endl;
}
