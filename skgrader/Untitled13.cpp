#include <stdio.h>

int a;
int map[10];
int main() {
	scanf("%d", &a);
	while (a != 0) {
		map[a%10]++;
		a /= 10;	
	}
	for (int i = 0; i< 9; i++) {
		if (map[i] == 0)
			continue;
		printf("'%d' = %2d\n", i, map[i]);		
	}
}
