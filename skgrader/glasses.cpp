#include <bits/stdc++.h>
using namespace std;

void die() {
    cout << "Not love";
    exit(0);
}
int main () {
    string s;
    cin >> s;
    stack<char> st;
    for (char h : s) {
        if (h == '(' || h == '{' || h == '[') {
                st.push(h);
        }
        else {
            if (st.empty()) die();
            if (h == ')') {
                if (st.top() == '(') st.pop();
                else die();
            }
            else if (h == '}' ){
                if (st.top() == '{') st.pop();
                else die();
            }
            else if (h == ']' ) {
                if (st.top() == '[') st.pop();
                else die();
            }
        }
    }
    if (!st.empty())
        die();
    cout << "Love";
    return 0;
}
