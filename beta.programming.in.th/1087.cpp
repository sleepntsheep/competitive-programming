#include <stdio.h>

int hi[310][310];
int rh[310][310];
int r, c, k, max = -1;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void calcrh(int y, int x) {
	int rhi = hi[y][x];
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < 4; j++ ) {
			
			int nx = x + i * dx[j];
			int ny = y + i * dy[j];
			if (nx < 0 || ny < 0 || nx > c || ny > r)
				continue;
			if (i & 1)
				rhi -= hi[ny][nx];
			else
				rhi += hi[ny][nx];
//			printf("ny: %d , nx: %d, rri = %d\n", ny, nx, (-1 * (i % 2)) * hi[ny][nx]);
		}
	}
	rh[y][x] = rhi;
//	printf("Real happiness of %d %d is %d\n", y, x, rh[y][x]);
}

int main() {
	scanf("%d%d%d", &r, &c, &k);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) { 
			scanf("%d", &hi[i][j]);
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0;j < c; j++ ){
			calcrh(i, j);
			if (rh[i][j] > max)
				max = rh[i][j];
		}
	}
	
	printf("%d", max);
	
}
