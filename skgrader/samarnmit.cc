#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    queue<pair<int,int>> Q;
    queue<int> GQ;
    vector<pair<int,int>> bought;
    while (1) {
        cin >> op;
        if (op == 'E') break;
        else if (op == 'A') {
            int id, mn;
            cin >> id >> mn;
            Q.push({id,mn});
        }
        else if (op == 'G') {
            int cst;
            cin >> cst;
            GQ.push(cst);
        }
    }
done:;
     while (!(Q.empty() || GQ.empty())){ 
            if (Q.front().second >= GQ.front()) {
                Q.front().second -= GQ.front();
                bought.push_back(Q.front());
                GQ.pop();
            }
            Q.pop();
     }

     for (pair<int, int> p : bought ){
         cout << p.first << ' ' << p.second << '\n';
     }
     return 0;

}
