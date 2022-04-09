#include <iostream>

using namespace std;

int A[201][201];
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.length(), l2=  s2.length();
    int i, j;
    for (i = 0; i < l1; i++) {
        for (j = 0; j < l2; j++) {
            if (s1[i] == s2[j]) {
                if (i < 1 || j < 1)
                    A[i][j] = 1;
                else 
                    A[i][j] = A[i-1][j-1] + 1;
            }
        }
    }
    int m = -1;
    int mx = 0, my = 0;
    for (i=0; i < l1; i++) {
        for (j=0; j < l2; j++) {
            if (A[i][j] > m) {
                my = i;
                mx = j;
                m = A[i][j];
            }
        }
    }

    for (i = m-1; i >= 0; i--) {
        cout << s1[my-i];
    }

}