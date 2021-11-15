#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);


	int a[n][m],
	aa[m], result[n], c = 0;

	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j++){
			int b;
			scanf("%d", &b);
			a[i][j] = b;
		}
	}

	for (int j = 0; j < m; j++){
		int state = 0;
		for (int i = 0; i < n; i++){
			state += a[i][j];
		}
		if (state > 0)  aa[j] = 1;
		else if (state < 0) aa[j] = -1;
		else aa[j] = 3;
	}

	for (int j = 0; j < m; j++){
		for (int i = 0; i < n; i++){
			if (a[i][j] == 0) continue;
			if (aa[j] == 3) continue;
			if (aa[j] != a[i][j]) {
				if (result[i] == 1) continue;
				result[i] = 1;
				c++;
			}
		}
	}


	//for (int i =0 ; i < m; i++) printf("%d", aa[i]);

	printf("%d", c);

	return 0;
}
