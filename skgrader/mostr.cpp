#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    char c, a, b;
    while (c != 'N') {
        cin >> c;
        if (c == 'Z') {
            cin >> a;
            cin >> b;
            replace(s.begin(), s.end(), a, b);
        }
        else if (c == 'D') {
            cin >> a;
            s.push_back(a);
        }
        else if (c == 'U') {
            cin >> n;
            s.erase(s.end() - n, s.end());
        }
    }
    cout << s << endl;
}
