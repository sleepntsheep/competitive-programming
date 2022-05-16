#include <iostream>
#include <queue>
#include <stack>

using namespace std;

#define MAX 1234570

int V[MAX];

int main() {
    queue<int> Q;
    V[1] = -1;

    Q.push(1);
    int w;
    cin >> w;

    while (!Q.empty()) {
      int n = Q.front();
      Q.pop();
      if (n == 0) goto done;
      if (n == w) break;
      if (n * 3 < MAX && V[n*3] == 0) {
        Q.push(n*3);
        V[n*3] = n;
        }
      if (V[n/2] == 0) {
        Q.push(n/2);
        V[n/2] = n;
        }
      done:;
    }

    stack<string> backtrack;
    int t = w;
    while (t != -1) {
        if (V[t] == -1) break;
        if (V[t] > t) backtrack.push("/2");
        else backtrack.push("x3");
        t = V[t];
    }

    while (!backtrack.empty()) {
        cout << backtrack.top();
        backtrack.pop();
    }

}


