#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int ajarnCount, x, y, dis = 0;
    cin >> ajarnCount;

    vector<pair<int, int>> ajarnPos;

    for (int i = 0; i < ajarnCount; i++) {
        int a, b;
        cin >> a >> b;
        ajarnPos.push_back(make_pair(a, b));
    }

    cin >> x >> y;

    if (x <= 0 || y <= 0) {
        cout << 0;
        return 0;
    }

    vector<vector<bool>> cant(y+1, vector<bool>(x+1, false));

    cant[0][0] = true;

    for (int i = 0; i < ajarnCount; i++) {
        if (ajarnPos[i].second <= y && ajarnPos[i].first <= x)
            cant[ajarnPos[i].second][ajarnPos[i].first] = true;
    }

/*    for (int i = 0; i <= y; i++) {
        for (int j = 0; j <= x; j++) {
            cout << cant[i][j] << ' ';
        }
        cout << endl;
    }
*/

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));

    int dx[4] = { 0, 1 };
    int dy[4] = { 1, 0 };
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

                if (nx > x || ny > y || cant[ny][nx])
                    continue;

                cant[ny][nx] = true;
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
