#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int result = 1e9;

    for (int i = 1; i < 4e9; i++){
        int lcm = 1;
        for (int j = 0; j < n; j++){
            if (i % a[j] != 0){
                lcm = 0;
                break;
            }
        }
        if (lcm)
        {
            cout << i;
            return 0;
        }
    }
}
