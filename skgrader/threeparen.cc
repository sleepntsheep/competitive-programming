#include <bits/stdc++.h>
using namespace std;

int main () {
    int q;
    cin >> q;
        while (q--) {
        string s;
        cin >> s;
        stack<char> st;
        for (char h : s) {
            if (h == '(' || h == '{' || h == '[') {
                    st.push(h);
            }
            else {
                if (st.empty())
                    goto no;
                if (h == ')') {
                    if (st.top() == '(') st.pop();
                    else goto no;
                }
                else if (h == '}' ){
                    if (st.top() == '{') st.pop();
                    else goto no;
                }
                else if (h == ']' ) {
                    if (st.top() == '[') st.pop();
                    else goto no;
                }
            }
        }
        if (!st.empty())
            goto no;
        cout << "yes" << '\n';
        continue;
        no:;
        cout << "no" << '\n';
    }
    return 0;
}
