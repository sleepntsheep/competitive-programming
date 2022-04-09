#include <stdio.h>

int main() {
	int w, l, x, y;
	scanf("%d%d%d%d", &w, &l, &x, &y);

	for (int i = 0; i < w + 2; i++)
		printf("#");
	printf("\n");

	for (int i = 1; i <= l; i++) {
		printf("#");
		for (int j = 1; j <= w; j++) {
			if (j == x - (y - i))
				printf("*");
			else if ( j == x + (y - i) )
				printf("*");
			else
				printf(" ");
		}
		printf("#");
		printf("\n");
	}


	for (int i = 0; i < w + 2; i++)
		printf("#");
}