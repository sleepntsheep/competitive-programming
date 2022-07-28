#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n, a;
    std::cin >> n;
    std::vector<int> l;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        auto it = upper_bound(l.begin(), l.end(), a);
        if (it == l.end())
            l.push_back(a);
        else
            *it = a;
    }

    std::cout << n-l.size();

    return 0;
}



