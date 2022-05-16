#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <math.h>
using namespace std;

struct tile
{
    int x;
    int y;
    int r;
};

bool compareByX(const tile &a, const tile &b)
{
    return a.x < b.x;
}

int main()
{
    int n;
    cin >> n;

    vector<tile> data;

    int yes[n] = {0}, c = 0;

    for (int i = 0; i < n; i++)
    {
        int q, w, e;
        cin >> q >> w >> e;
        tile nt = {
            q, // x
            w, // y
            e, // r
        };
        data.push_back(nt);
    }

    //sort(data.begin(), data.end(), compareByX);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << data[i].x << data[i].y << data[i].r << endl;
    // }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (j == i)
                continue;
            if (yes[i] && yes[j])
                continue;
            int rp = data[i].r + data[j].r;
            int xm = data[i].x - data[j].x;
            if (!(abs(xm) < rp)) continue;
            int ym = data[i].y - data[j].y;
            if (!(abs(ym) < rp)) continue;

            // int x2 = data[j].x - data[i].x;
            // int y2 = data[j].y - data[i].y;
            // int r2 = data[j].r + data[i].r;

            // x2 *= x2;
            // y2 *= y2;
            // r2 *= r2;

            if (1)
            {
                //cout << j << ' ' << i;
                c += 1;
                yes[i] = 1;
                yes[j] = 1;
            };
        }
    }

    cout << c;
}