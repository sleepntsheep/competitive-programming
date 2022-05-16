#include <iostream>
#include <algorithm>
#include <map>

std::map<int, int> s;

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    int k, m, n, dj;
    std::cin >> k >> m;
    char b[32];
    for (int i = 0; i < k; i++) {
        std::cin >> b;
        int c = 0;
        for (int j = 0; j < m; j++) {
            c |= (b[(m - j - 1)] - '0') << j;
        }
        s[c] = i; // code index
    }
    std::cin >> n;
    char f[1000005];

    int bitmask = (1 << m) - 1;

    while (n--) {
        std::cin >> dj >> f;
        int num = 0, r = m-1;
        bool fd[k] = { 0 } ,ok = 1;
        for (int i = m-1, j = 0; i >= 0; i--, j++) {
            num |= (f[i] - '0') << j;
        }
        while (r < dj-1) {
            if (s.count(num)) {
                fd[s[num]] = true;
                ok = 0;
            }
            num <<= 1;
            num |= f[++r] - '0';
            num &= bitmask;
        }
        if (ok) {
            std::cout << "OK\n";
            continue;
        } 
        for (int i = 0; i < k; i++) {
            if (fd[i])
                std::cout << i+1 << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
