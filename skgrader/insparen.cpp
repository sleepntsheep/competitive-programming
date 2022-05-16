#include <bits/stdc++.h>
using namespace std;

int a, c;
int main() {
    string s;
    cin >> s;
    for (char ch : s) {
        if (ch == '(') a++;
        else {
            if (a == 0)
                c++;
            else
                a--;
        }
    }
    cout << c + a;
}
