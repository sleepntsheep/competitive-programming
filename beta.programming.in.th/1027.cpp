#include <iostream>
using namespace std;

#define tr pair<pair<char, int>, bool>
#define nd first.second
#define st first.first
#define rd second

tr v[7];

int main() {
    for (int i =0 ; i < 7; i++)  {
        v[i].st = 'A'+i;
        v[i].rd = false;
    }
    string a = {'A'};
    while (a[0] != '!') {
        cin >> a;
        if (a[0] == '!') continue;
        // fill(v, v+7, 0);
        for (char c : a) {
            v[c-'A'].nd++;
        }
        int min = 1e9, m2 = 1e9+1, inm = 0;
        for (int i =0 ; i < 7; i++) {
            if (v[i].rd) continue;
            if (v[i].nd < min) {
                min = v[i].nd;
                inm = i;
            }
            else if (v[i].nd == min) {
                m2 = v[i].nd;
            }
        }
        if (m2 != min)
            v[inm].rd = true;
        int c = 0, ti;
        for (int i = 0 ; i < 7; i++) {
            if (!v[i].rd) {c++, ti = i;}
        }
        if (c == 1) {
            cout << '1' << endl << v[ti].st << ' ' << v[ti].nd;
            return 0;
        }


    }

    int i, j;

    for (int i = 0; i < 7; i++) {
        for (int j = i +1; j < 7; j++) {
            if (v[i].nd < v[j].nd) {
                auto tp = v[i];
                v[i] = v[j];
                v[j] = tp;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = i +1; j < 7; j++) {
            if (v[i].nd == v[j].nd && v[i].st > v[j].st) {
                auto tp = v[i];
                v[i] = v[j];
                v[j] = tp;
            }
        }
    }

    int c = 0;
    for (auto t : v) {
        if (!t.rd) c++;
    }

    cout << c << endl;
    for (int i =0 ; i < c; i++) {
        // if (v[i].nd < -1e6) continue;
        cout << v[i].st << ' ' << v[i].nd << endl;
    }
}
