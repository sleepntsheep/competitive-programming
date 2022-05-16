#include <string>
#include <iostream>

using namespace std;

int edit(string s1, string s2) {
    int l1 = s1.length();
    int l2 = s2.length();
    int dp[l1+1][l2+1];

    for (int i = 0; i <= l1; i++)
        dp[i][0] = i;
    for (int i = 0; i <= l2; i++)
        dp[0][i] = i;
    
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i] == s2[j]) {
                dp[i][j] = dp[i-1][j-1]; // this char doesn't matter;
            }
            else { 
                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
            }
        }
    }

    return dp[l1][l2];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << edit(s1, s2);

    return 0;
}
