#include <iostream>
using namespace std;

int main() {
	int n, m, w;
	int sx, sy, ex, ey;
	cin >> n >> m >> w >> sx >> sy >> ex >> ey;
	int data[n+2][m+2] = { 0 };
	for (int i = 0; i < m + 2; i++){
		data[0][i] = 1;
		data[n+1][i] = 1;
	}
	for (int j = 0; j < n + 2; j++){
		data[j][0] = 1;
		data[j][m+1] = 1;
	}

	for (int i = 0; i < w; i++) {
		int x, y;
		cin >> x >> y;
		data[x][y] = 1;
	}

}