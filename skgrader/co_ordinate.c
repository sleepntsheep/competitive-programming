#include <stdio.h>

void print(int h, int w, char b[h][w]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int w, h, x, y;
    scanf("%d%d%d%d", &h, &w, &y, &x);
    char b[h+2][w+2];
    for (int i = 1; i < h+2; i++) {
        for (int j = 1; j < w+2; j++) {
            b[i][j] = '.';
        }
    }

    for (int i = 0; i < h+2; i++)
        b[i][x] = '|';
    for (int i = 0; i < w+2; i++)
        b[y][i] = '-';
    for (int i = 0; i < h+2; i++)
        b[i][0] = '#';
    for (int i = 0; i < w+2; i++)
        b[0][i] = '#';
    for (int i = 0; i < w+2; i++)
        b[i][w+1] = '#';
    for (int i = 0; i < h+2; i++)
        b[h+1][i] = '#';

    b[y][x] = '+';

    print(h+2, w+2, b);
}
