#include <iostream>

int main() {
	int w; int l; int h;
	scanf("%d%d%d", &w, &l, &h);
	printf("%d\n", w*l*h);
	printf("%d", 2*h*(w+l)+2*w*l);
	return 0;
}