#include <stdio.h>
// 
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    
    char a[m][n];

    for (int i = 0; i < m; i++){
        scanf("%s", &a[i]);
    }
    
    for (int i = 0; i < m - 1; i ++){
        int not_same = 0;
        for (int j = 0; j < n; j++){
            if (a[i][j] != a[i+1][j]){
                not_same++;
            }
        }

        if (not_same > 2) {

            for (int ch = 0; ch < n; ch++){
                printf("%c", a[i][ch]);
            }

            not_same = 0;
            return 0;
        }
    }

    for (int ch = 0; ch < n; ch++){
        printf("%c", a[m - 1][ch]);
    }

}
