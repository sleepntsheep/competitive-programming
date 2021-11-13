#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int getIndex(vector<int> v, int k){
    auto it = find(v.begin(), v.end(), k);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else 
    {
        return -1;
    }
}

int main() {
    int nc, ns;
    cin >> nc >> ns;

    vector<int> uid;
    vector<int> cla;

    vector<int> line_uid;
    vector<int> line_cla;

    for (int i = 0 ; i < ns ;  i ++ ) {
        int a, b;
        cin >> a >> b;
        uid.push_back(b);
        cla.push_back(a);
    }

    char op = 'I';
    int opn;
    while (op != 'X') {
        cin >> op >> opn;
        if (op == 'E') {
            int index = getIndex(uid, opn);
            cout << "Finding index of uid, operation number: " << opn <<" || Result " <<index << endl;
            if (index == -1) continue;
            int classindex = 
            line_uid.insert(line_uid.begin + classIndex)
            //line_uid.push_back(uid[opn]);
            //line_cla.push_back(cla[opn]);
            //uid.erase(uid.begin());
            //cla.erase(cla.begin());
        }
        else if (op == 'D') {
            cout << uid.front() << endl;
            //uid.push_back(line_uid.front());
            //cla.push_back(line_cla.front());
            line_uid.erase(line_uid.begin());
            line_cla.erase(line_cla.begin());
        }
    }

    return 0;
}
