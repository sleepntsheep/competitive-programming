#include <iostream>
using namespace std;

int max3(int n1, int n2, int n3) {
    return max(n1, max(n2, n3));
}

int min3(int n1, int n2, int n3) {
    return min(n1, min(n2, n3));
}

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    int i, j;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    int min = 1e9;

    int tw, tr;
    for (i = 2; i < n; i++) {
        for (j = i+1; j <= n; j++) {
            int z = max3(a[n]-a[j], a[j]-a[i], a[i]) - min3(a[n]-a[j], a[j]-a[i], a[i]);
            if (z < min) {
                min = z;
                tw = i;
                tr = j;
            }
        }
    }

    cout << tw+1 << ' ' << tr+1;

    

}

