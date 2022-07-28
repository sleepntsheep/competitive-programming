#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0, t; i < n; i++) 
        cin >> t, a.push_back(t);
    char op;
    while (true) {
        cin >> op;
        int i, j;
        if (op == '0') break;
        cin >> i >> j;
        i--,j--;
        //printf("IJ: %d %d\n",i, j);
        if (op == '+')
        {
            a[i] += a[j];
            a.erase(a.begin()+j);
        }
        else if (op == '-')
        {
            a[i] -= a[j];
            a.erase(a.begin()+j);
        }
        else if (op == '*')
        {
            a[i] *= a[j];
            a.erase(a.begin()+j);
        }
        else if (op == '^')
        {
            a.insert(a.begin()+i, ++j);
        }

    }
    int sum = 0;
    for (int i = 0; i < a.size(); i+=2)
        sum += a[i];

    cout << sum;
}
