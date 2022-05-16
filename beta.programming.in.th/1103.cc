#include <iostream>
#include <vector>
using namespace std;

#define pii pair<int, int>

int b[2005][205];
int main(){ 
    int r, c, d;
    cin >>  r >> c;
    for (int i = 0 ; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    cin >> d;
    vector<pii> ds;
    for (int i =0 ;i <  d ; i++)
    {
        int x, y ;
        cin >> y >> x;
        ds.push_back({y, x});

    }
}
