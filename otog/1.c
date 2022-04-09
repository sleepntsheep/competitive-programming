#include <stdio.h>

int m[5] = {15, 5, 2, 1};
int p[5] = {3000, 1500, 800, 500};
int c[5];
int  r;

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 4; i++)
        while (n >= m[i]) {
            if (n > 8 && i ==1) {
                c[0]++;
                n -= m[0];
                break;
            }
            if (n > 3 && i == 2) {
                c[1]++;
                n -= m[1];
                break;
            }
            
            c[i]++;
            n -= m[i];
        }

    for (int i = 0 ;i  <4; i++) 
        r += c[i] * p[i];

    printf("%d", r);

}
