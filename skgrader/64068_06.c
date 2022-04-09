#include <stdio.h>

int strl(char *st) {
	int l = 0;
	while (st[l] != 0) l++;
	return l;
}

int main() {
	char s1[100], s2[100];
	scanf("%s%s", s1, s2);
	int l = strl(s1);
	int x = l, y = 0;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++)
			if (s1[i] == s2[j]) {
				y = j;
				x = i;
			}
	}
	
	char b[l+1][l+1];
	for (int i = 0 ; i <= l; i++)
		for (int j = 0; j <= l; j++)
			b[i][j] = ' ';
	for (int i = 0; i < l; i++) {
		b[i][x] = s2[i];
	}
	for (int i = 0; i < l; i++) {
		b[y][i] = s1[i];
	}
	
	for (int i =0 ; i < l; i++) {
		for (int j =0 ; j<= l; j++) 
			printf("%c", b[i][j]);
		printf("\n");
	}
	
	
}
