#include <stdio.h>
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

// dp[i][j] mean max point from i to j
int dp[1005][1005];
char crd[1005];

int main() {
    int n;
    scanf("%d", &n);
    // input
    for (int i = 0; i < n; i++)
        scanf(" %c", crd+i);
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            int front = j;
            int back = i + j;
            if (crd[front] == crd[back]) { 
                // if card front and back is same, max point is max point of subsequence without those 2 card + 1;
                dp[front][back] = dp[front+1][back-1] + 1;
            }
            for (int k = front; k < back; k++) {
                dp[front][back] = MAX(dp[front][back], dp[front][k] + dp[k+1][back]);
            }
        }
    }

    printf("%d", dp[0][n-1]);

    return 0;
}
