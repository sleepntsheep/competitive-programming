#include <bits/stdc++.h>
using namespace std;
const int MxN = 1234577;
int a[MxN];
int main() {
    int n;
    cin >> n;
    queue<int> q;
    q.push(1);
    a[1] = -1;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        if (f == 0) continue;
        if (f == n) break;
        if (f * 3 <= MxN && a[f*3] == 0) {
            a[f*3] = f;
            q.push(f*3);
        }
        if (a[f/2] == 0) {
            a[f/2] = f;
            q.push(f/2);
        }
    }
    stack<string> bt;
    int z = n;
    while ( a[z] != -1 )
    {
        if (a[z] > z) bt.push("/2");
        else bt.push("*3");
        z = a[z];
    }
    cout << 1;
    while (!bt.empty()) {
        cout << bt.top();
        bt.pop();
    }
    return 0;
}

