#include <stdio.h>

int main(){
	int a; int b; int c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	printf("%d %d %d", c, b, a);
	return 0;
}