#include <stdio.h>
#include <vector>
#include <map>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int n, p, i, j, a, b;
std::vector<int> w;
std::map<std::vector<int>, int> mp;

int main() {
    scanf("%d%d", &n, &p);
    for (i = 0; i < n; i++) {
        std::vector<int> tm;
        for (j = 0; j < p; j++) {
            scanf("%d", &a);
            tm.push_back(a);
        }
        mp.insert({tm, i+1});
    }

    for (j = 0; j < p; j++) {
        scanf("%d", &a);
        w.push_back(a);
    }

    if (mp.count(w) != 0) {
        if (mp[w] != 0) {
            printf("%d", mp[w]);
            return 0;
        }
    }

    for (auto x : mp) {
        if (x.second == 0) continue;
        std::vector<int> tp = w;
        for (j = 0; j < p; j++) 
            tp[j] -= x.first[j];

        if (mp.count(tp)) {
            if (mp[tp] == 0) continue;
            if (mp[tp] == x.second) continue;
            printf("%d %d", MIN(mp[tp], x.second), MAX(mp[tp], x.second));
            return 0;
        }
    }

    printf("NO");
    return 0;
}
