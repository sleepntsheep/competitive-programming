#include <stdio.h>

int n;
int b[5][10];
int r;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	//int a, b, c, d, e ;
	//scanf("%d%d%d%d%d", &a, &b, &c, &d, &e;
	scanf("%d%d%d%d%d", &b[0][i], &b[1][i], &b[2][i], &b[3][i], &b[4][i]);
    }

    for (int i = 0; i < n; i++)
	r += b[0][i] * 8;

    for (int i = 0; i < n; i++)
	r += b[1][i] * 6;

    for (int i = 0; i < n; i++)
	r += b[2][i] * 4;

    for (int i = 0; i < n; i++)
	r += b[3][i] * 2;

    for (int i = 0; i < n; i++)
	r += b[4][i] ;

    if (r % 8 > 0)
	r += 8;

    printf("%d", r / 8);
}
