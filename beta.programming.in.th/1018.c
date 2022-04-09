#include <stdio.h>

enum Dir{
    East,
    South,
    West,
    North
};

char dirc[] = {'E', 'S', 'W', 'N'};

int x, y;
int main() {
    int n;
    char dir[] = {'F', 'R', 'L', 'B'};
    int d = East;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        char o[3];
        int p;
        scanf("%s %d", &o, &p);
        if (o[0] == 'R') {
            d = (d+1) % 4;
        } else if (o[0] == 'L') {
            d = (d+3) % 4;
        } else if (o[0] == 'B') {
            d = (d+2) % 4;
        }
        switch (d) {
            case East:
                x += p;
                break;
            case South:
                y -= p;
                break;
            case West:
                x -= p;
                break;
            case North:
                y += p;
                break;
        }
        if ( x >= 50000 || x <= -50000 || y >= 50000 || y <= -50000 ) {
            printf("DEAD");
            return 0;
        }
    }
    printf("%d %d\n%c", x, y, dirc[d]);

}