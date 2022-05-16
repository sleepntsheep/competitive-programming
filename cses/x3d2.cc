#include <iostream>
#include <queue>
#include <stack>

using namespace std;

#define MAX 1234570

int V[MAX];

int main() {
    queue<int> Q;
    int d;
    cin >> d;
    V[d] = -1;

    Q.push(d);

    while (!Q.empty()) {
        int n = Q.front();
        Q.pop();
        if (n == 0) continue;
        if (n == 1) break;
        if (n & 1)  {
            if (n * 3+1 < MAX && V[n*3+1] == 0) {
                Q.push(n*3+1);
                V[n*3+1] = n;
            }
        }
        else {
            if (V[n/2] == 0) {
                Q.push(n/2);
                V[n/2] = n;
            }
        }
done:;
    }

    stack<int> backtrack;
    int t = 1;
    while (t != -1) {
        if (V[t] == -1) break;
        backtrack.push(V[t]);
        t = V[t];
    }

    while (!backtrack.empty()) {
        cout << backtrack.top() << ' ';
        backtrack.pop();
    }
    cout << 1;

}


