#include <stdio.h>

int main() {
    int a, d;
    scanf("%d", &a);

    if (a == 0) {
        printf("O-|-OOOO");
    }

    while (a != 0) {
        d = a % 10;
        a /= 10;
        switch (d) {
            case 0:
                printf("O-|-OOOO");
                break;
            case 1:
                printf("O-|O-OOO");
                break;
            case 2:
                printf("O-|OO-OO");
                break;
            case 3:
                printf("O-|OOO-O");
                break;
            case 4:
                printf("O-|OOOO-");
                break;
            case 5:
                printf("-O|-OOOO");
                break;
            case 6:
                printf("-O|O-OOO");
                break;
            case 7:
                printf("-O|OO-OO");
                break;
            case 8:
                printf("-O|OOO-O");
                break;
            case 9:
                printf("-O|OOOO-");
                break;
        }
        printf("\n");
    }
}
