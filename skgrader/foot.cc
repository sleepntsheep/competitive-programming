#include <stdio.h>
#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>
#include <utility>

using namespace std;

typedef pair<int,int> pii;

#define N 1050

int b[N][N] = { 0 };
int rb[N][N] = { 0 };
int lb[N][N] = { 0 };

int main() {
    int t;
    cin >> t;
    while(t--)  {
        memset(b, 0, sizeof b);
        memset(rb,0,sizeof rb);
        memset(lb,0,sizeof lb);

        int w, h, a, m;
        cin >> w >> h >> a >> m;

        for (int j = 1; j <= w; j++)
            for (int i = 1; i <= h; i++)
                b[i][j] = 1;

        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> y >> x;
            b[y][x] = 0;
        }

        // stack the legnth vertically
        for (int j = 1; j <= w; j++)
            for (int i = 1; i <= h; i++)
                b[i][j] = b[i-1][j] * b[i][j] + b[i][j];

        // find largest rect under histogram moemnt
        for (int i = 1; i <= h; i++) {
            {
                stack<int> st;
                for (int j = 1; j <= w; j++) {
                    int bnd = 1;
                    while (st.size() && b[i][st.top()] >= b[i][j])
                        st.pop();
                    if (st.size()) bnd = st.top() + 1;
                    lb[i][j] = bnd;
                    st.emplace(j);
                }
            }
            {
                stack<int> st;
                for (int j = w; j >= 1; j--) {
                    int bnd = w;
                    while (st.size() && b[i][st.top()] >= b[i][j])
                        st.pop();
                    if (st.size()) bnd = st.top() - 1;
                    rb[i][j] = bnd;
                    st.emplace(j);
                }
            }
        }

        /*
        // debug print
        for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++)
        printf("%d ", b[i][j]);
        puts("");
        }

        puts("LEFT BOUND");

        // debug print
        for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++)
        printf("%d ", lb[i][j]);
        puts("");
        }

        puts("RIGHT BOUND");

        // debug print
        for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++)
        printf("%d ", rb[i][j]);
        puts("");
        }
        */

        int mx = -1;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++){
                int area = (rb[i][j] - lb[i][j]+1) * b[i][j];
                //printf("mx: %d, i: %d, j: %d, rb: %d, lb: %d, area: %d\n", mx,i,j,rb[i][j],lb[i][j],area);
                mx = max(mx, area);
            }
        }
        if (mx >= a)
            puts("yes");
        else puts("no");
    }
}
