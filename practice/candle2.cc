#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int A[3004];
pair<pii, pii> M[3004];
int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i =0  ;i < n; i++)
        cin >> A[i];

    for (int i = k-1; i < n; i++) {
        pii m1 = {0, 0}, m2= {0, 0};
        for (int j = i - (k-1); j < i; j++) {
            if (A[j] > m1.first) {
                m1.first = A[j];
                m1.second = j;
            }
            else if (A[j] > m2.first){
                m2.first = A[j];
                m2.second = j;
            }
        }
        M[i] = {m1, m2};
    }

    
    return 0;
}
