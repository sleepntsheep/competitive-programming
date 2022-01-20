#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    for (int yyy = 0; yyy < k; yyy++)
    {
        int m, n;
        cin >> m >> n;
        int tbl[m][n];
        for (int i = 0; i < m; i++)
        {
            string temp;
            cin >> temp;
            for (int j = 0; j < n; j++)
            {
                tbl[i][j] = temp[j] - '0';
            }
        }

        int max = 0;
        for (int py = 0; py < n; py++)
        {
            for (int px = 0; px < m; px++)
            {
                int count = 0,
                    turn = 0;
                int nbu = tbl[py - 1][px];
                int nbl = tbl[py][px-1];
                int nbr = tbl[py][px+1];
                int nbd = tbl[py + 1][px];

                while (nbu || nbl || nbr || nbd != 0){
                    for (int i = 1; tbl[py][px+i]; i++){
                        count += tbl[py][px+i];
                    }
                }
            }
        }
    }
}