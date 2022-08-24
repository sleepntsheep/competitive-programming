/*
#include <bits/stdc++.h>
using namespace std;

int n, k;
set<int> trait[1005];
vector<int> mtrait[1005];
int main(){
    cin.tie(nullptr); ios::sync_with_stdio(false);
    cin >> n >> k;

    for (int i = 0, l, t; i < n; i++)  {
        cin >> l;
        while (l--) {
            cin >> t;
            trait[i].insert(t);
        }
    }

    for (int i = 0, l, t; i < k; i++)  {
        cin >> l;
        int aa[1005];
        int c = 0;
        int ci = 0;
        while (l--) {
            cin >> t;
            for (int j = 0; j < n; j++) {
                if (trait[j].count(t) != 0)
                    aa[j]++;
            }
        }
        for (int i = 0; i < n; i++)
            if (aa[i] > c)
                c = aa[i], ci = i;
        cout << ci << '\n';
    }

    return 0;
}
*/
