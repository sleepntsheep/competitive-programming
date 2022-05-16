#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;
int i1, i2;
int _min = 1e9, l, l2;
int main() {
    scanf("%d%d", &n,&m);
    char c;
    for (int i = 0; i < n + m; i++) {
        scanf(" %c",&c);
        if (c == 'T') {
            int h;
            scanf("%d", &h);
            if (_min <= h) {
                l2 = l;
                l = i1;
            }
            _min = h;
            i1++;
        }
        else {
            printf("%d\n", i1-l);
        }
    }

    return 0;
}
