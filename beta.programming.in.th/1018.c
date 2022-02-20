#include <stdio.h>

int x, y;
int main() {
    int n;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        char o[2];
        int p;
        scanf("%s %d", &o, &p);
        printf("%s %d", o, p);
        if (o == "LT") {
            x -= p;
        } else if (o == "RT") {
            x += p;
        } else if (o == "FD") {
            y -=
        }
    }
}