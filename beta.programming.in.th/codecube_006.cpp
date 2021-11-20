#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a (n);
    for (int i = 0 ; i < n;i ++){
        cin >> a[i];
    }

    long max = 0;

    for (int i = 0; i < a.size(); i++){
        if (i % 2 == 0) max += - a[i];
        else max += a[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            vector<int> nv;
            long r = 0;
            for (int k = 0; k < a.size(); k++){
                nv.push_back(a[k]);
            }
            auto it  = nv.insert(nv.begin() + i, 0);
            if ( i != j ) {
                it  = nv.insert(nv.begin() + j, 1);
            }
            for (int i = 0; i < nv.size(); i++){
                if (i % 2 == 0) r += -nv[i];
                else r += nv[i];
            }
            if (r < max) max = r;
        }
    }

    cout << max;
}