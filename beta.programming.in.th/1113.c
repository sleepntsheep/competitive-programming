#include <stdio.h>
#include <string.h>

int max, k;

int lssr(char *str, int st, int en) {
	int R = 0, O = 0;
	printf("trying %d %d\n", st, en);

	if (en - st <= max) return;

	for (int i = st; i <= en; i++) {
		if (str[i] == 'R')
			R++;
		else
			O++;
	}

	if (R == k * O)
		max = en - st;

	int z = lssr(str, st +1, en);
	int x = lssr(str, st, en-1);

	return z : x ? 
}

int main() {
	int n;
	scanf("%d%d", &n, &k);

	char s[n+10];
	scanf("%s", s);
	int st = 0, en = n - 1;

	lssr(s, st, en);

	printf("%d", max + 1);
}