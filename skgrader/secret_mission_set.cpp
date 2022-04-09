#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    int ajarnCount, x, y, dis = 0;
    cin >> ajarnCount;
    set<pair<int, int>> vsed;

    for (int _ = 0; _ < ajarnCount; _++) {
        int a, b;
        cin >> a >> b;
        vsed.insert(make_pair(a, b));
    }

    cin >> x >> y;

    if (x <= 0 || y <= 0) {
        cout << 0;
        return 0;
    }

    vsed.insert(make_pair(0, 0));

/*    for (int i = 0; i <= y; i++) {
        for (int j = 0; j <= x; j++) {
            cout << cant[i][j] << ' ';
        }
        cout << endl;
    }
*/
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));

    int dx[2] = { 0, 1 };
    int dy[2] = { 1, 0 };
    bool red = false;

    while (!q.empty()) {
        int len = q.size();
        for (int i = 0; i < len; i++) {
            pair<int, int> cur = q.front();
            q.pop();

//            cout << "cur: " << cur.first << " " << cur.second << endl;

            if (cur.first == x && cur.second == y) {
                red = true;
                break;
            }

            for (int w = 0; w < 2; w++) {
                int nx = cur.first + dx[w],
                    ny = cur.second + dy[w];

                if (nx > x || ny > y || vsed.count(make_pair(nx, ny)))
                    continue;

                //cant[ny][nx] = true;
                vsed.insert(make_pair(nx, ny));
                q.push(make_pair(nx, ny));
//                cout << "making nei : " << nx << " " << ny << endl;
            }

        }
        if (red)
            break;
        dis++;
    }
    
    cout << dis;
}
