#include <iostream>

int main()
{
    int k;
    std::cin >> k;
    int r[k];
    for (int u = 0; u < k; u++)
    {
        r[u] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        int h, c;
        std::cin >> h;
        std::cin >> c;
        for (int j = 0; j < c; j++)
        {
            int x;
            std::cin >> x;
            if (x == h)
            {
                r[i] = r[i] + 1;
            }
        }
    }
    for (int y = 0; y < k; y++)
    {
        std::cout << r[y] << "\n";
    }
    return 0;
}