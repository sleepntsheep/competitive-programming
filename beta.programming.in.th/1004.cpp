#include <bits/stdc++.h>
using namespace std;
int main() {
    int classn, stdn;
    cin >> classn >> stdn;
    map<int, int> stdid_class;
    map<int, int> stdid_inline;
    for (int i = 0; i < stdn; i++){
        int a, b;
        cin >> a >> b;
        stdid_class[b] = a;
        stdid_inline[b] = 0;
    }
    char op = ' ';
    int opcode;
    vector<int> line;
    int waitingi = 0;
    vector<int> result;
    while (op != 'X'){
        cin >> op;
        if (op == 'E') {
            cin >> opcode;
            int thisstdclass = stdid_class[opcode];
            int foundclass = 0;
            for (int i = waitingi ; i < line.size(); i++){
                if (i == line.size() - 1) {
                    break;
                }
                if (stdid_class[line[i]] == thisstdclass && thisstdclass != stdid_class[line[i+1]]){
                    foundclass = 1;
                    line.insert(line.begin() + i + 1, opcode);
                    break;
                }
            }
            if (!foundclass) {
                line.push_back(opcode);
            }
        }   
        else if (op == 'D') {
            result.push_back(line[waitingi]);
            waitingi++;
        }
    }

    for( int i =0 ; i < result.size(); i++){
        cout <<result[i] << endl;
    }

    cout << '0';

    return 0;
}
